#ifndef box_HPP
#define box_HPP

#include <iostream>
using namespace std;
class box
{
private:
  double length, width, height, weight;
  string address, city, state, zipcode;
public:
  box();
  box(double,double,double,double,string,string,string,string);

  void setLength(double);
  void setWidth(double);
  void setHeight(double);
  void setWeight(double);
  void setAddress(string);
  void setCity(string);
  void setState(string);
  void setZipcode(string);

  double getLength();
  double getWidth();
  double getHeight();
  double getWeight();
  string getAddress();
  string getCity();
  string getState();
  string getZipcode();

  double calcShippingPrice();
  void printInfo();
} 
