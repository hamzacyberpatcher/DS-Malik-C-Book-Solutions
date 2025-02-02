#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double netBalance, d1, payment, d2, interestRatePerMonth, averageDailyBalance, interst;

	cout << "Enter the balance shown in the bill: ";
	cin >> netBalance;
	cout << "Enter the payment made: ";
	cin >>payment;
	cout << "Enter the number of days in the payment cycle: ";
	cin >> d1;
	cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> d2;
	cout << "Enter the interst rate per month: ";
	cin >> interestRatePerMonth;

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interst = averageDailyBalance * interestRatePerMonth;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The avergae daily balance is " << averageDailyBalance << endl;
	cout << "Interest is " << interst << endl;

	return 0;
}
