#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
  double price=0,cash=0,change=0,rem=0,change2=0;
    int quarter=0,dime=0,nickel=0,penny=0;
    char ans;

    ofstream fout;
    fout.open("receipt.txt");
   
    do
      {
	cout << "Please enter a price: ";
	cin>>price;
	cout << "Please enter amount payed: ";
	cin>>cash;
	
	if(price<cash)
	  {
	    change=cash-price; //no touchies
	    change2=change;
	    quarter=change/0.25;
	    rem=quarter*0.25;
	    change=change-rem;
	    dime=change/0.10;
	    rem=dime*0.10;
	    change=change-rem;
	    nickel=change/0.05;
	    rem=nickel*0.05;
	    change=change-rem;
	    penny=change/0.01;
	    rem=penny*0.01;
	    change=change-rem;
	    
	    fout << setprecision(2) << fixed << "Price:$" << right << setw(15) << price << endl;
	    fout << endl;
	    fout << setprecision(2) << fixed << "Money inserted:$" << right <<  setw(6) << cash << endl;
	    fout << endl;
	    fout << "Change:" << endl;
	    fout << "Quarters:" << right << setw(13) << quarter << endl;
	    fout << "Dimes:" << right << setw(16) << dime << endl;
	    fout << "Nickels:" << right << setw(14) << nickel << endl;
	    fout << "Pennies:" << right << setw(14) << penny << endl;
	    fout << "**********************" << endl;
	  }
	else if(price==cash) 
	  {
	    cout << "No change." << endl;
	    fout << setprecision(2) << fixed << "Price:$" << right << setw(15) << price << endl;
            fout << endl;
            fout << setprecision(2) << fixed << "Money inserted:$" << right <<  setw(6) << cash << endl;
            fout << endl;
	    fout << "No Change." << endl;
	    fout <<  "**********************" << endl;
	  }
	else
	  {
	    cout << "Error: Not enough money inserted." << endl;
	  }
	cout << "Do you have another transaction?" << endl;
	cin >> ans;
      }
	while((ans=='Y')||(ans=='y'));
    fout.close();
 return 0;
}
