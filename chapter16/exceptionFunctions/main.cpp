#include <iostream>
#include <string>
using namespace std;

class divByZero
{
	string msg;
public:
	divByZero()
	{
		msg = "Div By Zero";
	}
	divByZero(string str)
	{
		msg = str;
	}
	string what()
	{
		return msg;
	}
};

void doDiv()
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
	catch (divByZero)
	{
		throw;
	}
}

int main()
{
	try
	{
		doDiv();
	}
	catch (divByZero divObj)
	{
		cout << "Exception: " << divObj.what() << endl;
	}
	return 0;
}
