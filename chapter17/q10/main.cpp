#include <iostream>
#include <cmath>
using namespace std;

double powerHelp(double x, double y)
{
	if (y == 0.0) return 1.0;
	else if (y == 1.0) return x;
	return x * powerHelp(x, y - 1);
}

double power(double x, double y)
{
	if (y < 0) return (1 / power(x, -y));
	return powerHelp(x, y);
}

int main()
{
	cout << power(4,-2) << endl;
	return 0;
}
