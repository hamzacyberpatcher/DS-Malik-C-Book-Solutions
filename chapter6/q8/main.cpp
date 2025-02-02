#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double radius(double x1, double y1, double x2, double y2);
double area(double radius);
double circumference(double radius);

int main()
{
	double x1, x2, y1, y2;
	double r;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the absicca of the center: ";
	cin >> x1;
	cout << "Enter the ordinate of the center: ";
	cin >> y1;
	cout << "Enter the absicca of any certain point on the circle: ";
	cin >> x2;
	cout << "Enter the ordinate of any certain point on the circle: ";
	cin >> y2;

	r = radius(x1,y1,x2,y2);

	cout << "The radius of the circle is " << r << endl;;
	cout << "The area of the circle is " << area(r) << endl;
	cout << "The circumference of the circle is " << circumference(r) << endl;

	return 0;

}

double radius(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));
}

double area(double radius)
{
	return PI * radius * radius;
}

double circumference(double radius)
{
	return 2 * PI * radius;
}
