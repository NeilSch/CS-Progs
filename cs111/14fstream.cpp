#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream fin;
  int num;
  int total=0;
  string name="";

  cout << "Please enter a file name: " << endl;
  cin >> name;
  fin.open(name.c_str());
  if(fin)
    {
      while(fin>>num)
	{
	  cout << "Read " << num << " from file." << endl;
	  total=total+num;
	}  
      cout << "Total is " << total << endl;
    }
  else
    {
      cout << "Invalid File." << endl;
    }
  return 0;
}
