#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double POUNDS_PER_KILOGRAM = 2.2;

	double weight;

	cout << "Enter the weight of the person in kilogram: ";
	cin >> weight;

	cout << fixed << showpoint << setprecision(2);

	cout << "The weight of the person in pounds is " << weight * POUNDS_PER_KILOGRAM << endl;

	return 0;
}
