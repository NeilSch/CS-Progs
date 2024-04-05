#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string userInput="";
  ofstream fout;
  fout.open("sentence.txt");
  cout << "Please enter a sentence: " << endl;
  getline(cin,userInput);
  fout << userInput;
    fout.close();
    return 0;
}
