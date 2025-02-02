#include <iostream>
using namespace std;

int main()
{
	const double SERVICE_CHARGES_RATE = 0.015;

	int shares;
	double buyingPrice, sellingPrice;

	cout << "No of shares : ";
	cin >> shares;

	cout << "Buying price per share : ";
	cin >> buyingPrice;

	cout << "Selling price per share : ";
	cin >> sellingPrice;

	double amountInvested = buyingPrice * shares;
	double amountRecieved = sellingPrice * shares;
	double netProfit = amountRecieved - amountInvested;
	double serviceCharges = SERVICE_CHARGES_RATE * amountRecieved;

	cout << "Amount Invested : " << amountInvested << endl;
	cout << "Amount Recieved : " << amountRecieved << endl;
	cout << "Net Profit : " << netProfit << endl;
	cout << "Service Charges : " << serviceCharges << endl;

	return 0;

}
