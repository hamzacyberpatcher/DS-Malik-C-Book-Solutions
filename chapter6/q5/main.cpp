#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

const double PI = 3.14159;

double rectangle(double l, double w)
{
	return l * w;
}

double circle(double r)
{
	return PI * r * r;
}

double cylinder(double bR, double h)
{
	return PI * bR * bR * h;
}

int main()
{
	double radius, height, length, width;
	int choice;

	cout << fixed << showpoint << setprecision(2);

	cout << "This is a program can calculate the area of a rectangle, "
		<< "the area of a cicle, or volume of a cylinder." << endl;
	cout << "To run the program enter: " << endl;
	cout << "1: To find the area of a rectangle." << endl;
	cout << "2: To find the area of the circle." << endl;
	cout << "3: To find the volume of the cylinder." << endl;
	cout << "-1: To terminate the program." << endl;
	cin >> choice;

	while(choice != 1)
	{
		switch(choice)
		{
			case 1:
				cout << "Enter the length and the width "
					<< "of the rectangle: ";
				cin >> length >> width;
				cout << endl;
				cout << "Area: " << rectangle(length,width) << endl;
				break;
			case 2:
				cout << "Enter the radius of the circle: " << endl;
				cin >> radius;
				cout << endl;
				cout << "Area: " << circle(radius);
				break;
			case 3:
				cout << "Enter the radius of the base and the "
					<< "height of the cylinder: ";
				cin >> radius >> height;
				cout << endl;

				cout << "Volume: " << cylinder(radius,height) << endl;
				break;
			default:
				cout << "Invalid Choice!" << endl;
				break;
		}

		cout << "To run the program enter: " << endl;
		cout << "1. To find the area of a rectangle." << endl;
		cout << "2. To find the area of a circle. " << endl;
		cout << "3. To find the volume of the cylinder." << endl;
		cout << "-1. To terminate the program" << endl;
		cin >> choice;
		cout << endl;
	}
	return 0;
}
