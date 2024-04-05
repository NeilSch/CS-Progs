#include <iostream>

using namespace std;

void getNumbers(double num1, double num2, double num3, double num4, double &avg, double &max, double &min)
{  
  avg = (num1 + num2 + num3 + num4)/4;
  max = num1;
  if(max < num2)
    max = num2;
  if(max < num3)
    max = num3;
  if(max < num4)
    max = num4;
  
  min = num1;
  if(min > num2)
    min = num2;
  if(min > num3)
    min = num3;
  if(min > num4)
    min = num4;
}

int main()
{
  double num1 = 0, num2=0, num3 = 0, num4 = 0, avg, min, max;
  cout<<"Please enter four numbers:"<<endl;
  cout << "Number 1:" << endl;
  cin>> num1;
  cout << "Number 2:" << endl;
  cin>> num2;
  cout << "Number 3:" << endl;
  cin>> num3;
  cout << "Number 4:" << endl;
  cin>> num4;

  getNumbers(num1, num2, num3, num4, avg, max, min);
  cout<<"Minimum is "<< min << endl;
  cout<<"Maximum is "<<max << endl;
  cout<<"Average is "<<avg << endl;

  return 0;
}
