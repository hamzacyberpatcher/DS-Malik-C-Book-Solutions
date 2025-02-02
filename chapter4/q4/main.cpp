#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

const double PI = 3.1416;

int main()
{
	string shape;
	double height;
	double width;
	double length;
	double radius;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the shape type: (rectangle, circle, cylinder) ";
	cin >> shape;
	cout << endl;

	if (shape == "rectangle")
	{
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		cout << endl;
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		cout << endl;
		cout << "Area of the rectangle = " << length * width << endl;
		cout << "Perimeter of the rectangle = " << 2 * (length + width) << endl;
	}
	else if (shape == "circle")
	{
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		cout << endl;
		cout << "Area of the circle = " << PI * pow(radius,2.0) << endl;
		cout << "Perimeter of the circle = " << 2 * PI * radius << endl;
	}
	else if (shape ==  "cylinder")
	{
		cout << "Enter the radius of the base of the cylinder: ";
		cin >> radius;
		cout << endl;
		cout << "Enter the height of the cylinder: ";
		cin >> height;
		cout << endl;
		cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;
		cout << "Surface Area of the cylinder = " << 2 * PI * pow(radius, 2.0) + 2 * PI * radius * height << endl;
	}
	else
	{
		cout << "The program does not handle " << shape << endl;
	}

	return 0;
}
