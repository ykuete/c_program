#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    // Write your main here
    double netBalance, d1, payment,d2, interestRate;

    //cout <<setprecision(2)<<fixed<<showpoint;
	 cout << fixed << showpoint << setprecision(2);
    
    cout <<"Enter net Balance: ";
    cin >> netBalance;
    cout << endl;

    cout << "Enter number of days in the billing cycle: ";
    cin >> d1;
    cout << endl;

    cout << "Enter payment made: ";
    cin >> payment;
    cout << endl; 

    cout << "Enter number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << endl;

    cout <<"Enter interest rate per month: ";
    cin >> interestRate;
    cout << endl;

    //averageDailyBalance = (netBalance*d1-payment*d2)/d1;
    //interest = averageDailyBalance*interestRate;
    //cout<<endl<<"interest is " <<interest<<endl;

    cout << "The interest on the unpaid balance is: "
         << (netBalance * d1 - payment * d2) / d1 * interestRate
         << endl;

    return 0;
}
