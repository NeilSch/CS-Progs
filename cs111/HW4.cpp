#include "HW4.hpp" 
#include<iostream>
   
using namespace std;
box::box()
{
  length=0;
  width=0;
  height=0;
  weight=0;
  address="";
  city="";
  state="";
  zipcode="";
}

box::box(double length2, double width2, double height2, double weight2, string address2, string city2, string state2, string zipcode2)
{
  if(length2<0)
    length=0;
  else
    length=len;

  if(width2<0)
    width=0;
  else
    width=wid;

  if(height2<0)
    height=0;
  else
    height=height2;


  if(weight2<0)
    weight=0;
  else
    weight=weight2;

  if(addr.length()==0)
    address="";
  else
    address=address2;

  if(cit.length()==0)
    city="";
  else
    city=city2;

  if(stat.length()==2 )
    state=state2;
  else
    state="XX";

  if(zip.length()==0)
    zipcode=""; 
  else
    zipcode=zipcode2;

  stringstream funk(zip);
  int zip=0;
  funk>>zip;
  if(zip>9999 && zip<=99999) 
    zipcode=zip;
  else
    zipcode="00000"; 
}
void box::setLength(double length2)
{
  if(length2<0)
    length=0;
  else
    length=length2;
}
void box::setWidth(double width2)
{
  if(width2<0)
    width=0;
  else
    width=width2;
}
void box::setHeight(double height2)
{
  if(height2<0)
    height=0;
  else
    height=height2;
}
void box::setWeight(double weight2)
{
  if(weight2<0)
    weight=0;
  else
    weight=weight2;
}
void box::setAddress(string address2)
{
  address=address2;
}
void box::setCity(string city2)
{
  city=city2;
}
void box::setState(string state2)
{
  if(stat.length()>2)
    state="XX";
  else
    state=state2;
}
void box::setZipcode(string zipcode2)
{
  stringstream funk(zip);
  int zip=0;
  funk>> zip;
  if(zip>9999 && zip<=99999)
    zipcode=zip;
  else
    zipcode="00000";
}

double box::getLength()
{
  return length;
}
double box::getWidth()
{
  return width;
}
double box::getHeight()
{
  return height;
}
double box::getWeight()
{
  return weight;
}
string box::getAddress()
{
  return address;
}
string box::getCity()
{
  return city;
}
string box::getState()
{
  return state;
}
string box::getZipcode()
{
  return zipcode;
}
double box::calcShippingPrice()
{
  return (((length + width + height) * 0.50) + (weight * 1.00));
}
void box::printInfo()
{
  cout<<"-----------------------Box Information---------------------"<<endl;
  cout<<"Length : "<<length<<" inches "<<endl;
  cout<<"Width : "<<width<<" inches "<<endl;
  cout<<"Height : "<<height<<" inches "<<endl;
  cout<<"Weight : "<<weight<<" pounds "<<endl;
  cout<<"Address : "<<address<<endl;
  cout<<"City : "<<city<<endl;
  cout<<"State : "<<state<<endl;
  cout<<"ZipCode : "<<zipcode<<endl;
  cout<<"Shipping Price : "<<calcShippingPrice()<<"$"<<endl;
  cout<<"------------------------------------------------------------"<<endl;
}
