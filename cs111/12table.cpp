#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int size=6;
  const int size2=6;
  int num[size][size2];

  cout << "   ";
  for (int row=0; row<size; row++)
    {  
      cout << setw(4) << row;
    }
  cout << endl;

  cout << "-----";
  for(int row=0;row<size; row++)
    {
      cout << "----";
    }
  cout << endl;


  for(int row=0; row<size; row++)
    {
      for(int column=0; column<size; column++)
	{
	num[row][column]=column*row;
	}
    }

  for(int row=0; row<size; row++)
    {
    cout << row  << " |";
    for(int column=0; column<size; column++)
      {
	cout << right << setw(4)<< num[row][column];
      }
    cout << endl;
    }
  return 0;
}
