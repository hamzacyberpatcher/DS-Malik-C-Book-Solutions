#include <iostream>
using namespace std;

void addFractions(int a, int b, int c, int d, int& e, int& f)
{
	e = a * d + b * c;
	f = b * d;
	return;
}

void subFractions(int a, int b, int c, int d, int& e, int& f)
{
	e = a * d - b * c;
	f = b * d;
	return;
}

void mulFractions(int a, int b, int c, int d, int& e, int& f)
{
	e = a * c;
	f = b * d;
	return;
}


void divFractions(int a, int b, int c, int d, int& e, int& f)
{
	e = a * d;
	f = b * c;
	return;
}

void printFractions(int a, int b, int c, int d, int e, int f, char op)
{
	cout << a << " / " << b << " " << op << " " << c << " / " << d << " = " << e << " / " << f << endl;
	return;
}

int main()
{
	cout << "THE ULTIMATE FRACTION CALCULATOR" << endl;
	cout << "This is the ULTIMATE FRACTION CALCULATOR" << endl;
	cout << "Enter your fractions just like this program asks" << endl;
	cout << "Than enter the desired operation" << endl;
	cout << "+ for ADDITION" << endl;
	cout << "- for SUBTRACTION" << endl;
	cout << "* for MULTIPLICATION" << endl;
	cout << "/ for DIVISION" << endl;

	int a, b, c, d, e, f;
	char op;
	cout << "Enter the value of the numerator of the first fraction: ";
	cin >> a;
	cout << "Enter the value of the denominator of the first fraction: ";
	cin >> b;
	cout << "Enter the value of the numerator of the second fraction: ";
	cin >> c;
	cout << "Enter the value of the denominator of the second fraction: ";
	cin >> d;
	cout << "Enter the desired operation: ";
	cin >> op;
	
	switch(op)
	{
		case '+':
			addFractions(a, b, c, d, e, f);
			break;
		case '-':
			subFractions(a, b, c, d, e, f);
			break;
		case '*':
			mulFractions(a, b, c, d, e ,f);
			break;
		case '/':
			divFractions(a, b, c, d, e, f);
			break;
		default:
			cout << "Invalid Opration" << endl; return 0;
	}
	printFractions(a, b, c, d, e, f, op);
	return 0;
	
}
