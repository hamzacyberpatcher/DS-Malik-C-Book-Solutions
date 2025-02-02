#include <iostream>
#include <string>
using namespace std;

class divByZero
{
	string message;
public:
	divByZero()
	{
		message = "Div by Zero";
	}
	divByZero(string str)
	{
		message = str;
	}
	string what()
	{
		return message;
	}
};

int main()
{
	try
	{
		int x, y;

		cout << "Enter the dividend: ";
		cin >> x;

		cout << "Enter the divisor: ";
		cin >> y;

		if (y == 0) throw divByZero();

		cout << "Quotient: " << x / y << endl;
	}
	catch(divByZero divByZeroObj)
	{
		cout << "Exception Occured: " << divByZeroObj.what() << endl;
	}

	return 0;
}
