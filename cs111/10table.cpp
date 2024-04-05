#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
  int row;
  int column;
  cout << "   ";
  for (int row=1; row<10; row++)
    {
      cout <<  right << setw(4)<< row;
    }
  cout << " " << endl;
  cout << "----------------------------------------------" << endl;
  for(int row=1; row<10; row++)
    {
      cout << row << " |";
      for(int column=1; column<10; column++)
	{
	  cout << right << setw(4) << row*column;
	}
      cout << " " << endl;
    }
  return 0;
}
