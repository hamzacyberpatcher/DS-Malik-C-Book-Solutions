#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, disc, x, y;
	cout << "Enter the value of a (co-efficient of x^x): ";
	cin >> a;
	cout << "Enter the value of b (co-efficient of x): ";
	cin >> b;
	cout << "Enter the value of c (constant term): ";
	cin >> c;

	disc = pow(b, 2.0) - 4*a*c;

	if (disc == 0)
	{
		cout << "The roots are real and equal" << endl;
	}
	else if (disc > 0)
	{
		cout << "The roots are real" << endl;
		x = (-b + sqrt(disc)) / (2 * a);
		y = (-b - sqrt(disc)) / (2 * a);
		cout << "x = " << x << endl << "y = " << y << endl;
	}
	else
	{
		cout << "The roots are imaginary" << endl;
	}
	return 0;
}
