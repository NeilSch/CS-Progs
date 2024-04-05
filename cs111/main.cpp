#include <iostream>

#include "circle.h"
using namespace std;

int main()
{
  object object1, object2;
  int radius;
  cout << "Enter Radius for the fist object: ";
  cin >> radius;
  object1.setRadius(radius);
  cout << "Enter Radius for the second object : ";
  cin >> radius;
  object2.setRadius(radius);
  cout << endl;
  cout << "Radius of object #1: " << object1.getRadius() << endl;
  cout << "Area of object #1: " << object1.calcArea() << endl;
  cout << "Radius of object #2: " << object2.getRadius() << endl;
  cout << "Area of object #2: " << object2.calcArea() << endl;

  return 0;
}
