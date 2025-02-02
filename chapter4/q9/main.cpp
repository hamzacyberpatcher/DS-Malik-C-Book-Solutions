#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x, y;
	char op;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the two numbers: ";
	cin >> x >> y;

	cout << "Enter the operation: ";
	cin >> op;

	switch(op)
	{
		case '+':
			cout << x << " + " << y << " = " << x + y << endl;
			break;
		case '-':
			cout << x << " - " << y << " = " << x - y << endl;
			break;
		case '*':
			cout << x << " * " << y << " = " << x * y << endl;
			break;
		case '/':
			if (y == 0)
			{
				cout << "Illegal Operation" << endl;
			}
			else
			{
				cout << x << " / " << y << " = " << x / y << endl;
			}
			break;
	}
	return 0;
}
