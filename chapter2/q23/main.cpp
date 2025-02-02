#include <iostream>
using namespace std;

int main()
{
	const double K = 6.67e-8;
	double m1, m2, d;
	cout << "Input the mass of the first body : ";
	cin >> m1;
	cout << "Input the mass of the second body : ";
	cin >> m2;
	cout << "Input the distance between their centers : ";
	cin >> d;

	double force = (K * m1 * m2) / (d * d);

	cout << "The force of attraction between them is " << force << endl;

	return 0;
}
