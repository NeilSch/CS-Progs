#include <iostream>
using namespace std;

int func(int n);

int main()
{
  int num=0;
  cout << "-----Fibonacci's Sequence-----" << endl;
  cout << "Please enter a number: " << endl;
  cin >> num;
  cout << func(num) << endl;
  
  return 0;
}

int func(int n)
{
  if(n == 1||n==2)
    {
      return 1;
    }
  else
    return func(n - 1) +  func(n-2);
}
