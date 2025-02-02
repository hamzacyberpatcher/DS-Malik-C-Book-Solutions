#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int main()
{
	cout << "sqrt(PI): " << sqrt(PI) << endl;

	double radius;

	cout << "Enter the radius of the sphere: ";
	cin >> radius;

	cout << "The surface area of the sphere is " << 4.0 * PI * pow(radius, 2.0) << endl;
	cout << "The volume of the sphere is " << (4.0 / 3.0) * PI * pow(radius, 3.0) << endl;

	return 0;
}
