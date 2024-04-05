#ifndef CIRCLE_H
#define CIRCLE_H
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
#endif
