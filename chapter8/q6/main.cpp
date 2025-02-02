#include <iostream>
#include <cmath>
using namespace std;

void pythagoreanTriple(int& a, int& b, int& c, int m, int n)
{
	a = abs(m*m - n*n);
	b = 2*n*m;
	c = m*m + n*n;
	return;
}

int main()
{
	int a, b, c;
	int m, n;
	cout << "Enter first integer: ";
	cin >> m;
	cout << "Enter second integer: ";
	cin >> n;
	pythagoreanTriple(a, b, c, m, n);
	cout << "Pythagorean Triple: " << a << ", " << b << ", " << c << endl;
	return 0;
}
