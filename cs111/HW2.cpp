#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream fout;
  int star=2;

  fout.open("triangle.txt"); 
 do
    {
      if(star<1||star>50)
	{
	  cout << "Invalid Input. Please Try Again." << endl;
	}
  cout << "Please specify the desired size of the triangle (1-50): " << endl;
  cin >> star;
       for(int i=1; i <= star; i++)
	{
	  for(int j = 1; j <= i; j++)
	    {
	      fout << "*";
	    }
	  fout << endl;
	}
       for(int i=1; i<star; i++)
	 {
	   for(int j=star; j>i;j--)
	     {
	       fout << "*";
	     }
	   fout << endl;
	 }
     }
  while(star<1||star>50);
  
  fout.close();
  return 0;
}
