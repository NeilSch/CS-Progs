#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
  int face1;
  int face2;
  int total;
  int frequency7=0;
  int frequency12=0;
  srand(time(0));
  for(int cycle=1;cycle<1000001;cycle++)
    {   
      face1= 1 + rand()%6;
      face2= 1 + rand()%6;
      total= face1+face2;
      cout << face1 << " + " << face2 << " = " << total << endl;
   switch(total)
     {
   case 7:
     ++frequency7;
  break;
    case 12:
      ++frequency12;
      break;
     }
    }
  cout << "You rolled 7 " << frequency7 << " times." << endl;
  cout << "You rolled 12 " << frequency12 << " times." << endl;

  return 0;
}
