#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Please Enter an Integer: " << endl;
  cin >> num;
  switch(num)
    {
    case 0:
      cout << "You entered zero!" << endl;
      break;
    case 1:
      cout << "You entered one!" << endl;
      break;
    case 2:
      cout << "You entered two!" << endl;
      break;
    case 3:
      cout << "You entered three!" << endl;
      break;
    case 4:
      cout << "You entered four!" << endl;
      break;
    case 5:
      cout << "You entered five!" << endl;
      break;
    case 6:
      cout << "You entered six!" << endl;
      break;
    case 7:
      cout << "You entered seven!" << endl;
      break;
    case 8:
      cout << "You entered eight!" << endl;
      break;
    case 9:
      cout << "You entered nine!" << endl;
      break;
    case 10:
      cout << "You entered ten!" << endl;
      break;    
    default:
      cout << "The number you entered is not between zero and ten." << endl;
      break;
    }
 return 0;
}
