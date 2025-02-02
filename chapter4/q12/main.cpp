#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("inData.txt");
	int accountNumber;
	char accountType;
	double minimumBalance;
	double currentBalance;

	cout << fixed << showpoint << setprecision(2);

	for (int i = 1; i <= 5; i++)
	{
		cout << "Run Number: " << i << endl;
		inFile >> accountNumber >> accountType >> minimumBalance >> currentBalance;

		cout << "Account Number: " << accountNumber << endl;

		if (accountType == 's')
		{
			cout << "Account Type: Savings" << endl;
			cout << "Current Balance: " << currentBalance << endl;
			if (currentBalance >= minimumBalance)
			{
				cout << "New Balance: " << (currentBalance * 104) / 100 << endl;
			}
			else
			{
				cout << "The current balance is insufficient. $10.00 srvice charges are being charged" << endl;
				cout << "New Balance: " << currentBalance - 10.00 << endl;
			}
		}
		else if (accountType == 'c')
		{
			cout << "Account Type: Checkings" << endl;
			cout << "Current Balance: " << currentBalance << endl;
			if (currentBalance >= minimumBalance)
			{
				if ((currentBalance - minimumBalance) >= 5000)
				{
					cout << "Interest of 3 percent is being given" << endl;
					cout << "New Balance: " << (currentBalance * 103) / 100 << endl;
				}
				else
				{
					cout << "Interest of 5 percent is being given" << endl;
					cout << "New Balance: " << (currentBalance * 105) / 100 << endl;
				}
			}
			else
			{
				cout << "Current Balance is insufficient. $25.00 service charges are being charged" << endl;
				cout << "New Balance: " << currentBalance - 25.00 << endl;
			}
		}

		cout << "-------------------------------------" << endl;

	}

	return 0;
}
