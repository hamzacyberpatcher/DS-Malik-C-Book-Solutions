#include <cstdlib>
#include <ios>
#include <iostream>
using namespace std;

int main()
{
	double hours = 2.1;
	double rate = 4.6;

	cout << hours << endl;
	cout << rate << endl;

	cout << scientific;
	cout << hours << endl;
	cout << rate << endl;

	cout << fixed;
	cout << hours << endl;
	cout << rate << endl;

	return 0;
}
