#include <iostream>
using namespace std;
int main()

{
  int num = 0;
  int even = 0;
  int odd = 0;
  int times = 0;
 while (num>=0)
    {
    cout << "Please enter a positive integer (-1 to quit): " << endl;
    cin >> num;
  if (num%2==0)
    {
      cout << num << " is even." << endl;
      even++;
      times++;
	}
  if (num%2==1)
    {
      cout << num << " is odd." << endl;
      odd++;
      times++;
    }
  }
 if (times > 0)
   { 
cout << "Even Numbers: " << even << endl;
 cout << "Odd Numbers: " << odd << endl;
   }
 else
   {
     cout << "No Numbers were entered" << endl;
   }
  return 0;
}
