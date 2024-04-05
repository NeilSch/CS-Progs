#include <iostream>
using namespace std;

const double PI = 3.14;

class object 
{
private:
  int radius;

public:
  object();
  object(int r);
  void setRadius(int r);
  int getRadius();
  double calcArea();
};

object::object()
{
  radius = 0;
}

object::object(int r)
{
  if(r < 0) 
    {
      r = 0;
    }
  radius = r;
}

void object::setRadius(int r)
{
  radius = r;
}

int object::getRadius()
{
  return radius;
}

double object::calcArea()
{
  return PI * radius * radius;
}

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
