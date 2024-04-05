#include <iostream>
using namespace std;
const int size = 5;

void addition(double *arr, double fill)
{
  for(int i=0; i<size; i++)
    {
      arr[i]+=fill;
    }
}

void subtraction(double *arr, double fill)
{
  for(int i=0; i<size; i++)
    {
      arr[i]-=fill;
    }
}

void multiplication(double *arr, double fill)
{
  for(int i=0;i<size;i++)
    {
      arr[i]*= fill;
    }
}

void division(double *arr, double fill)
{
  for(int i=0; i<size; i++)
    {
      arr[i]/= fill;
    }
}

void print(const double *arr)
{
  for(int i=0; i<size; i++)
    {
      cout<<arr[i]<<endl;
    }
}
int main()
{
  double arr[size];
  cout << "Please enter " << size << " variables of the array:" << endl;
  for(int i=0; i<size; i++)
    {
      cin>>arr[i];
    }
  cout << "You entered:" << endl;
  print(arr);
  char eq;
  cout<<"Please enter the operator (+,-,/,*):"<<endl;
  cin>>eq;
  cout<< "Enter the operand:" << endl;
  double fill;
  cin>>fill;
  switch (eq)
    {
    case '+':
      addition(arr,fill);
      break;
    case '-':
      subtraction(arr,fill);
      break;
    case '*':
      multiplication(arr,fill);
      break;
    case '/':
      division(arr,fill);
      break;
    default:
      break;
    }
  cout << "Array after the operation is " << endl;
  print(arr);
  return 0;
}
