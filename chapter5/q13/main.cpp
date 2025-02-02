#include <iostream>
using namespace std;

int main()
{
	float popA, popB, rA, rB;

	cout << "Enter the population of town A: ";
	cin >> popA;
	cout << "Enter the growth rate of town A: ";
	cin >> rA;

	cout << "Enter the population of town B: ";
	cin >> popB;
	cout << "Enter the growth rate of town B: ";
	cin >> rB;

	int years = 0;

	while (popA < popB)
	{
		popA = (popA * (100 + rA)) / 100;
		popB = (popB * (100 + rB)) / 100;
		years++;
	}

	cout << "Years: " << years << endl;

	return 0;
}
