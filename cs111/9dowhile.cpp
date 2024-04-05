#include <iostream>
using namespace std;
int main()
{
  int num;
  int odd = 0;
  int even = 0;
  char queso;

do
  {
    cout << "Please enter an integer: " << endl;
    cin >> num;
    if ((num%2)==0)
      {
	cout << num << " is even." << endl;
	even++;
      }
    else
      {
	cout << num << " is odd." << endl;
	odd++;
      }
     cout << "Enter another integer?(Y/N): " << endl;
     cin >> queso;
  } while((queso =='y')|| (queso =='Y'));
 cout << "Odd Numbers: " << odd << endl;
 cout << "Even Numbers: " << even << endl;    
  
  return 0;
}
