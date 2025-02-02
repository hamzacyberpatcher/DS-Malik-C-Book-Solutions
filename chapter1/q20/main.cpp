#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a = 40;
	float b = 67;
	float c = 98;

	float s = (a + b + c) / 2;

	float area = sqrt(s * (s - a) * (s - b) * (s - c));

	cout << area << endl;

	return 0;
}
