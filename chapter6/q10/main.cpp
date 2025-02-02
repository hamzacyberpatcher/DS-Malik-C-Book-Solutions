#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double mean(double, double, double, double, double);
double standard_deviation(double, double, double, double, double);

int main()
{
	double x1, x2, x3, x4, x5;
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter five numbers: ";
	cin >> x1 >> x2 >> x3 >> x4 >> x5;
	cout << "The mean value is " << mean(x1,x2,x3,x4,x5) << endl;
	cout << "The standard deviation is " << standard_deviation(x1,x2,x3,x4,x5) << endl;
	return 0;
}

double mean(double x1, double x2, double x3, double x4, double x5)
{
	return (x1 + x2 + x3 + x4 + x5) / 5.0;
}

double standard_deviation(double x1, double x2, double x3, double x4, double x5)
{
	double x = mean(x1, x2, x3, x4, x5);
	return sqrt((pow((x1 - x), 2.0) + pow((x2 - x), 2.0) + pow((x3 - x), 2.0) + pow((x4 - x), 2.0) + pow((x5 - x), 2.0)) / 5.0);
}
