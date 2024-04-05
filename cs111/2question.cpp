#include <iostream>
using namespace std;
int main()
{
  string name;
  bool CS;
  char punct;
  int n1, n2;
  int div;
  int rem;
  int two;

 cout << "Please Enter Your Name:";
 cin >> name;
 cout << "Hi " << name << "!" <<  endl;

 cout << "Are you a CS Major? Enter 1 for yes or a 2 for no:";
 cin >> CS;
 cout << "CS MAJOR:" << CS << endl;

 cout << "What's your favorite punctuation mark?" << endl;
 cin >> punct;
 cout << "Your favorite punctuation mark is:" << punct << endl;

 cout << "Please give one integer:" << endl;
 cin >> n1;
 cout << "Please give another integer:" << endl;
 cin >> n2;

 div = n1 / n2;
 rem = n1 % n2;
 two = (double)n1 / n2;
 cout << n1 << "/" << n2 << "=" << div << "R" <<  rem << endl;
 cout << "It could also be written as " << (double)n1/n2 << endl;
 return 0;
}
