#include <cstdio>
#include <iostream>
using namespace std;

void initialize(int&, int&, char&);
void getHoursRate(double&, double&);
double payCheck(double, double);
void printCheck(double, double);
void funcOne(int&, int&);
void nextChar(char&);

int main()
{
	int x, y;
	char z;
	double rate, hours;
	double amount;
	
	initialize(x,y,z);
	getHoursRate(hours, rate);
	printCheck(hours, rate);
	funcOne(x,y);
	cout << "x: " << x << endl << "y: " << y << endl;
	nextChar(z);
	cout << z << endl;
	return 0;
}

void initialize(int& x, int& y,char& z)
{
	x = y = 0;
	z = ' ';
	return;
}

void getHoursRate(double& hours, double& rate)
{
	cout << "Enter the amount of hours you have worked: ";
	cin >> hours;
	cout << "Enter the rate per hour: ";
	cin >> rate;
	return;
}

double payCheck(double hours, double rate)
{
	if (hours < 40)
	{
		return hours * rate;
	}
	else if (hours > 40)
	{
		return hours * rate * 1.5;
	}
	return -1;
}

void printCheck(double hours, double rate)
{
	cout << "Hours you have worked: " << hours << endl;
	cout << "Rate per hour: " << rate << endl;
	cout << "Salary: " << payCheck(hours,rate) << endl;
	return;
}

void funcOne(int& x, int& y)
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	x = 2 * x + y - num;
	return;
}

void nextChar(char& z)
{
	z += 1;
	return;
}
