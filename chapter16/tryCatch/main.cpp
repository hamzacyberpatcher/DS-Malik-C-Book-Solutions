#include <iostream>
using namespace std;

int main()
{
	try
	{
		int x, y;
		cout << "Enter the dividend: ";
		cin >> x;

		cout << "Enter the divisor: ";
		cin >> y;

		if (y <= 0) throw y;

		cout << "Quotient: " << x / y;
	}
	catch (int x)
	{
		cout << "Division by " << x;
	}
	cout << endl;
	return 0;
}
