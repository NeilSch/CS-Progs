
#include <iostream>

using namespace std;

int main()
{
  int num1;

  cout << "Please Enter Integer: ";
  cin >> num1;
  if ((num1%2)==0)
    {
      cout << "This number is even." << endl;
       if ((num1%3==0)&&(num1%5==0))
       {
	cout << "This number is divisible by 5 and 3." << endl;
       }
       else 
       {
	 cout << "This number is not divisble." << endl;
       }
    }
  else 
    {
      cout << "This number is odd." << endl;
	if ((num1) <= 0)
	  {
	    cout << "This number is negative." << endl;
	  }
	else 
	  {
	    cout << "This number is positive" << endl;
	  }
    }
  if ((num1>-100)&&(num1<100))
    {
      cout << "This number is in between -100 and 100." << endl;
    }
  else 
    { 
      cout << "This number is not in between -100 and 100." << endl;
    }
 return 0;
}
