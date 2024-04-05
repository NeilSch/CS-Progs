#include "circle.h"
const double PI = 3.14;

object::object(){
  radius = 0;
}

object::object(int r){
  if(r < 0) {
    r = 0;
  }
  radius = r;
}

void object::setRadius(int r){
  radius = r;
}

int object::getRadius(){
  return radius;
}

double object::calcArea()
{
  return PI * radius * radius;
}
