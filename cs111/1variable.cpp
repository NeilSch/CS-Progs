
#include <iostream>
using namespace std;
int main()
{
  int n1, n2;

  cout << "Enter the first number: ";
  cin >> n1;

  cout << "Enter the second number: ";
  cin >> n2;

  int sum;
  sum= n1 + n2;
  cout << n1 << "+" << n2 << "=" << sum << endl; 
 
 int sub;
  sub = n1 - n2;
  cout << n1 << "-" << n2 << "=" << sub << endl;

  int pro;
  pro = n1 * n2;
 cout << n1 << "*" << n2 << "=" << pro << endl;

 int div;
 div = n1 / n2;

  int rem;
  rem = n1 % n2;

  cout << n1 << "/" << n2 << "=" << div << "r" <<  rem << endl;


  return 0;
}
