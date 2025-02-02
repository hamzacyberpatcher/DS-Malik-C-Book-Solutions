#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double FEDERAL_INCOME_TAX = 0.15;
	const double STATE_TAX = 0.035;
	const double SOCIAL_SECURITY_TAX = 0.0575;
	const double MEDICARE_TAX = 0.0275;
	const double PENSION_PLAN = 0.05;
	const double HEALTH_INSURANCE = 75;

	string name;
	double grossAmount;

	cout << "Enter your name: ";
	getline(cin,name);

	cout << "Enter your gross salary: ";
	cin >> grossAmount;

	cout << fixed << setprecision(2);
	cout << name << endl;
	cout << setfill('.') << left << setw(26) << "Gross Amount: " << setfill(' ') << right << " $" << setw(7) << grossAmount << endl;
	cout << setfill('.') << left << setw(26) << "Federal Tax: " << setfill(' ') << right << " $" << setw(7) << grossAmount * FEDERAL_INCOME_TAX << endl;
	cout << setfill('.') << left << setw(26) << "State Tax : " << setfill(' ') << right << " $" << setw(7) << grossAmount * STATE_TAX << endl;
	cout << setfill('.') << left << setw(26) << "Social Security Tax: " << setfill(' ') << right << " $" << setw(7) << grossAmount * SOCIAL_SECURITY_TAX << endl;
	cout << setfill('.') << left << setw(26) << "Medicare/Medicaid Tax: " << setfill(' ') << right << " $" << setw(7) << grossAmount * MEDICARE_TAX << endl;;
	cout << setfill('.') << left << setw(26) << "Pension Plan: " << setfill(' ') << right << " $" << setw(7) << PENSION_PLAN * grossAmount << endl;
	cout << setfill('.') << left << setw(26) << "Health Insurance: " << setfill(' ') << right << " $" << setw(7) << HEALTH_INSURANCE << endl;

	double NetPay = grossAmount - (grossAmount * FEDERAL_INCOME_TAX) - (grossAmount * STATE_TAX) - (grossAmount * SOCIAL_SECURITY_TAX) - (grossAmount * MEDICARE_TAX) - (grossAmount * PENSION_PLAN) - HEALTH_INSURANCE;

	cout << setfill('.') << left << setw(26) << "Net Pay: " << setfill(' ') << right << " $" << setw(7) << NetPay << endl;

	return 0;
}
