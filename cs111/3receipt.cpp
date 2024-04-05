#include <iostream>
#include <iomanip>

using namespace std;
int main ()

{
  string food1, food2, food3;
  double price1, price2, price3;
  double tax, tax2, sub, total;

  cout << "Welcome! Please list the 3 items you shopped for today." << endl;
  cout << "Item 1:" << endl;
  getline (cin,  food1);
    cout << "Price:" << endl;
  cin >> price1;
    cout << "Item 2:" << endl;
    cin.ignore();
    getline (cin, food2);
    cout << "Price:" << endl;
    cin >> price2;
    cout << "Item 3:" << endl;
    cin.ignore();
    getline (cin, food3);
    cout << "Price:" << endl;
    cin >> price3;
    cout << "Finally, please enter the tax rate as a decimal:" << endl;
    cin >> tax;

    sub = price1 + price2 + price3;
    total = sub + (sub * tax);
    tax2 = tax * 100;

    cout << "Tax Rate: " << setprecision(2) << fixed << tax2  << "%" << endl;
    cout << "******************************" << endl;
    cout << left << setw(20) << food1 << "$" << right << setw(9) << price1 << endl; 
    cout << left << setw(20) << food2 << "$" << right << setw(9) << price2 << endl;
    cout << left << setw(20) << food3 << "$" << right << setw(9) << price3 << endl;
    cout << "             " << endl;
    cout << left << setw(20) << "Subtotal:" << "$" << right << setw(9) << sub <<  endl;
    cout << left << setw(20) <<  "Tax:" << "$" << right << setw(9) << sub * tax << endl;
    cout << left << setw(20) << "Total:" << "$" << right << setw(9) << total << endl;
 cout << "******************************" << endl;
 cout << "Thank you for shopping with us" << endl;
 cout << "******************************" << endl;
  return 0;
}
