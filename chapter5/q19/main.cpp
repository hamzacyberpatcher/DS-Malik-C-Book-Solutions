#include <iostream>
using namespace std;

int main()
{
	double amount, monthly, interest, monthInter, monthPay;
	
	cout << "Enter the principal amount: ";
	cin >> amount;
	cout << "Enter the interest: ";
	cin >> interest;
	cout << "Enter the monthly installment: ";
	cin >> monthly;

	int months = 0;

	interest /= 12;

	while (amount > 0)
	{
		monthInter = (amount * interest) / 100;
		monthPay = monthly - monthInter;
		amount -= monthPay;
		months++;
	}

	cout << "Months: " << months << endl;

	return 0;
}
