#include <iostream>
using namespace std;

int func(int n);

int main()
{
  cout << func(4) << endl;

  return 0;
}

int func(int n)
{
  if(n == 0)
    return 0;
  else
    return func(n - 1) + n;
}

 
