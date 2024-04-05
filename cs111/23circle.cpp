#include <iostream>
using namespace std;
const double PI = 3.14;


class circle 
{
public:
  int radius;
public:
  double calcArea ();
};

double circle::calcArea () 
{
  return PI * radius * radius;
}

int main () 
{
  circle circle1, circle2;
  cout<< "Enter Radius for circle1: ";
  cin>> circle1.radius;
  cout<< "Enter Radius for circle2: ";
  cin>> circle2.radius;
  cout<<endl;
  cout<<"Radius of circle1: "<<circle1.radius<<endl;
  cout<<"Area of circle1: "<<circle1.calcArea()<<endl;
  cout<<"Radius of circle2: "<<circle2.radius<<endl;
  cout<<"Area of circle2: "<<circle2.calcArea()<<endl;
  return 0;
}
