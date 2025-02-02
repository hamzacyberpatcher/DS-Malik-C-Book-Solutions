#include <iostream>
using namespace std;

int main()
{
	double payRate;
	int hours;

	cout << "What is your hourly pay rate : " << endl;
	cin >> payRate;
	cout << "How many hours have you worked : " << endl;
	cin >> hours;

	double totalEarning = payRate * hours;

	double tax = totalEarning * 0.14;

	double clothes = totalEarning * 0.1;

	double schoolSupplies = totalEarning * 0.01;

	cout << "Income before taxes : " << totalEarning << endl;
	cout << "Income after taxes : " << totalEarning - tax << endl;

	totalEarning = totalEarning - tax - clothes - schoolSupplies;

	double savingsBonds = totalEarning * 0.25;

	double additionalSavingBonds = savingsBonds * 0.5;

	cout << "Income spent on clothes : " << clothes << endl;
	cout << "Income spent on school accessories : " << schoolSupplies << endl;
	cout << "Income spent on savings bonds : " << savingsBonds << endl;
	cout << "Additional bonds bought by parents : " << additionalSavingBonds << endl;

	return 0;
}
