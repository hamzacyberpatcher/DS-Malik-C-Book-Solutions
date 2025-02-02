#include <iostream>
#include <iomanip>
using namespace std;

const double RES_BILL_PROCESS_FEE = 4.50;
const double RES_BASIC_SERVICE_FEE = 20.50;
const double RES_PREMIUM_CHANNEL = 7.50;

const double BUS_BILL_PROCESSING_FEE = 15.00;
const double BUS_BASIC_SERVICE_FEE = 75.00;
const double BUS_PREMIUM_CHANNEL = 50.00;
const double BUS_ADD_CONNECTION_FEE = 5.00;

int main()
{
	int customerAccountNumber;
	char customerCode;
	int noOfPremiumChannels;
	int noOfBasicServiceConnections;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter your account number: ";
	cin >> customerAccountNumber;

	cout << "Enter your code (r or R for residential), (b or B for business): ";
	cin >> customerCode;
	
	switch(customerCode)
	{
		case 'r':
		case 'R':
			cout << "Enter the number of Premium Channels: ";
			cin >> noOfPremiumChannels;

			cout << "Account Number: " << customerAccountNumber << endl;
			cout << "Amount Due: : $" << RES_BILL_PROCESS_FEE + RES_BASIC_SERVICE_FEE + (noOfPremiumChannels * RES_PREMIUM_CHANNEL) << endl;
			break;
		case 'b':
		case 'B':
			cout << "Enter the number of Premium Channels: ";
			cin >> noOfPremiumChannels;
			cout << "Enter the number of basic connections: ";
			cin >> noOfBasicServiceConnections;
			
			cout << "Account Number: " << customerAccountNumber << endl;

			if (noOfBasicServiceConnections <= 10)
			{
				cout << "Amount Due: $" << BUS_BILL_PROCESSING_FEE + BUS_BASIC_SERVICE_FEE + noOfPremiumChannels * BUS_PREMIUM_CHANNEL << endl;
			}
			else
			{
				cout << "Amount Due: $" << BUS_BILL_PROCESSING_FEE + BUS_BASIC_SERVICE_FEE + (noOfBasicServiceConnections - 10) * BUS_ADD_CONNECTION_FEE + (noOfPremiumChannels * BUS_PREMIUM_CHANNEL) << endl;
			}
			break;
		default:
			cout << "Invalid Customer Code" << endl;
			break;
	}

	return 0;

}
