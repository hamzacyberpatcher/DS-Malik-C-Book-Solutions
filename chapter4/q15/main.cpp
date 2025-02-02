#include <iostream>
#include <iomanip>
using namespace std;

const double REG_BASIC_FEE = 10.00;
const int REG_MIN_FREE = 50;
const double REG_COST_PER_MIN = 0.20;

const double PRE_BASIC_FEE = 25.00;
const double PRE_FREE_DAY_MIN = 75;
const double PRE_FREE_NIGHT_MIN = 100;
const double PRE_DAY_COST_PER_MIN = 0.10;
const double PRE_NIGHT_COST_PER_MIN = 0.05;

int main()
{
	int accountNumber;
	char serviceCode;
	int min, day_min, night_min;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter your account number: ";
	cin >> accountNumber;

	cout << "Enter your service code: (r or R for regular and p or P for premium): ";
	cin >> serviceCode;

	switch(serviceCode)
	{
		case 'r':
		case 'R':
			cout << "Enter the minutes used: ";
			cin >> min;

			cout << "Account Number: " << accountNumber << endl;
			cout << "Service Type: Regular" << endl;
			cout << "Minutes used: " << min << endl;

			if (min <= REG_MIN_FREE)
			{
				cout << "Amount Due: $" << REG_BASIC_FEE << endl;
			}
			else
			{
				cout << "Amount Due: $" << REG_BASIC_FEE + (min - REG_MIN_FREE) * REG_COST_PER_MIN << endl;
			}
			break;
		case 'p':
		case 'P':
			cout << "Enter the day minutes used: ";
			cin >> day_min;
			cout << "Enter the night minutes used: ";
			cin >> night_min;

			cout << "Account Number: " << accountNumber << endl;
			cout << "Service Type: Premium" << endl;
			cout << "Mintues used: " << day_min + night_min << endl;

			if (day_min <= PRE_FREE_DAY_MIN && night_min <= PRE_FREE_NIGHT_MIN)
			{
				cout << "Amount Due: $" << PRE_BASIC_FEE << endl;
			}
			else if (day_min > PRE_FREE_DAY_MIN && night_min <= PRE_FREE_NIGHT_MIN)
			{
				cout << "Amount Due: $" << PRE_BASIC_FEE + (day_min - PRE_FREE_DAY_MIN) * PRE_DAY_COST_PER_MIN << endl;
			}
			else if (day_min <= PRE_FREE_DAY_MIN && night_min > PRE_FREE_NIGHT_MIN)
			{
				cout << "Amount Due: $" << PRE_BASIC_FEE + (night_min - PRE_FREE_NIGHT_MIN) * PRE_NIGHT_COST_PER_MIN << endl;
			}
			else if (day_min > PRE_FREE_DAY_MIN && night_min > PRE_FREE_NIGHT_MIN)
			{
				cout << "Amount Due: $" << PRE_BASIC_FEE + (day_min - PRE_FREE_DAY_MIN) * PRE_DAY_COST_PER_MIN + (night_min - PRE_FREE_NIGHT_MIN) * PRE_NIGHT_COST_PER_MIN << endl;
			}
			break;
		default:
			cout << "Invalid service code" << endl;
	}

	return 0;
}
