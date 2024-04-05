#include <iostream>
using namespace std;

void func1();
int func2(int n1,int n1);

int main()
{
  cout << func1();         //1

  cout << func2(3, 5);   //2

  return 0;

}

 

void func1()

{

  cout << "Hello";

}

 

int func2(int n1, int n2)

{

  return n1 + n2;

}
