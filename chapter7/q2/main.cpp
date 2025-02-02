#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void func1();
void func2(int&, int& , double&);

int main()
{
	int num1, num2;
	double num3;

	int choice;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		func1();
		cin >> choice;

		if (choice == 1)
		{
			func2(num1, num2, num3);
			cout << num1 << ", " << num2 << ", " << num3 << endl;
		}
	} while(choice != 99);

	return 0;
}

void func1()
{
	cout << "To run the program, enter 1." << endl;
	cout << "To exit the program, enter 99." << endl;
	cout << "Enter 1 or 99: ";
}

void func2(int& a, int& b, double &c)
{
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;

	if (a >= b)
	{
		c = pow(a,b);
	}
	else if (a < b)
	{
		c = pow(b,a);
	}
	else if (a != 0 && b == 0)
	{
		c = sqrt(abs(a));
	}
	else if (a == 0 && b != 0)
	{
		c = sqrt(abs(b));
	}
	else
	{
		c = 0;
	}
	return;
}
