
#include <iostream>
using namespace std;

double dist(double num1, double num2);

int main()
{
  double num1, num2,result;
  cout << "Please enter a value: ";
  cin >> num1;
  cout << "Please enter another value: ";
  cin >> num2;
  result=dist(num1,num2);
  cout << "The distance between " << num1 << " and " << num2 << " is " << result;
  return 0;
}

double dist(double num1, double num2)
{
  double total=num1-num2;
  if(total<0)
    {
      total=total*-1;
    }
  return total;
}

