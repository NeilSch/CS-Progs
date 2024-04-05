//***********************************
// FALL22 YOSHII: N-gram probability use
// The input file can be of any format
// ***********************************
//-------------------------------------
// YOUR NAME: Neil Schneringer
// Tested on Empress using g++
//-------------------------------------
//(DONE) means a comment that had ** was completed
// add includes here (DONE)
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

//data structure to record file input
struct prob 
{
  char letter;  // next
  string pre;   // previous
  double ans;  // probability
};

double probability(vector<prob>&, string);
double probability(vector<prob>&, string, string, double);

// This program uses trigram probabilities to produce P(word) 
int main()
{
  //store probabilities
  vector<prob> v;
  //stores input file
  string path;
  //user inputted word
  string temp;
  //for reading files
  fstream fin;
  //struct to pass through
  prob build;
  //final probability of entered phrase
  double final;
  //temporary string holder
  string hold;
  //another temporary string holder that signifies how sleepy I am right now!
  string tired;
  //another! i am bad at coding and couldn't think of another way to read from file!
  double killme;

  //Ask the user for the input file name (DONE)
  cout << "Enter a file name: " << endl;
  cin >> path;
  
  //Read in the trigram probabilties (DONE)
  fin.open(path.c_str());
  //Check to see if file exists; close program if not
  if(!fin) {                                
    cout << "Unable to open file: " << path << endl;
    return 0;
  }
  
  while(getline(fin,hold)) 
    {
      //read from file
      stringstream ss(hold);
      ss >> tired;
      build.letter = tired[0];
      ss >> tired;
      build.pre = tired;
      ss >> killme;
      build.ans = killme;
      v.push_back(build);
    }

  //display
  for(int i = 0; i < v.size(); i++)
    {
      cout << "P(" << v[i].letter << " | " << v[i].pre << ") = " << v[i].ans << endl;
    }

  // Repeat the following until the user
  // wants to quit: (Done?)
 
  do {
    // Ask the user to enter a word (DONE)
    cout << "Enter a word (or quit to quit): " << endl;
    cin >> temp;
    if (temp == "quit") {} //do NOTHING
    else {
      // Show all the probabilities you used
      // to calculate the P(word)
      final = probability(v, temp); 
      // Show the P(word) (DONE)
      cout << " = " << final << endl;
    }
    // end of loop (DONE)
  } while (temp != "quit");
  return 0;
} 

double probability(vector<prob> &v, string input) 
{
  int i = 0;
  //while it does not equal the relevant starting letter, increment until it does
  while((input[0] != v[i].letter) && (v[i].pre == "null")) 
    {
      i+=1;
    }
  //once found, print
  cout << v[i].ans << "(" << v[i].letter << " | " << ") ";
  //recursive function to handle all non-starting letters
  return probability(v, input.substr(1,input.length()-1), string(1, input[0]), v[i].ans);
}

double probability(vector<prob> &v, string input, string pre, double p) 
{
  //while there are characters left
  if (!input.empty()) 
    {
      //while it does not equal the relevant starting letter, increment until it does
      int i = 0;
      while((input[0] != v[i].letter) || (pre != v[i].pre)) 
	{
	  i+=1;
	}
      cout << "* " << v[i].ans << "(" << v[i].letter << " | " << v[i].pre << ") ";
      p*=v[i].ans;
      //point to next
      string nextpre;                                             
      if (v[i].pre.length() > 1) nextpre = v[i].pre.substr(1,1);
      else nextpre = v[i].pre.substr(0,1);
      //move to next letter
      nextpre+=v[i].letter;
      //recursion
      return probability(v, input.substr(1,input.length()-1), nextpre, p);
    }
  else
    return p;
}
