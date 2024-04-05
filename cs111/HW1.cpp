#include <iostream>
using namespace std;

//Name: Neil Schneringer
//Plan: Ask if the user is enrolled in a class.
//If yes(y/Y), program will ask for a grade. Upon entering the grade, the program will state its opinion on how well you are doing in the class and immediately close. If the user enters anything outside of A,B,C,D, or F, it will tell the user it is invalid and close.
//If no(n/N), the program will thank the user and immediately close.
//If the user enters anything else, it will declare the input invalid and immediately close.

int main()
{
  int status=0;
  char school;
  char grade;

  cout << "Are you currently enrolled in a class (Y/N)?" << endl;
  cin >> school;
  if ((school=='y')||(school=='Y'))
    {
      status++;
      cout << "Please enter your letter grade for this class: " << endl;
      cin >> grade;
      switch (grade)
	{
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	  cout << "Great Job!" << endl;
	  break;
	case 'C':
	case 'c':
	  cout << "You're doing alright." << endl;
	  break;
	case 'D':
	case 'd':
	case 'F':
	case 'f':
	  cout << "You can improve." << endl;
	  break;
	default:
	  cout << "Invalid Grade." << endl;
	}
    }
  else if((school=='n')||(school=='N'))
    {
      status++;
    cout << "Thanks for using the system." << endl;
    }
  else if(status==0)
    {
    cout << "Invalid Input" << endl;
    }
  return 0;
}
