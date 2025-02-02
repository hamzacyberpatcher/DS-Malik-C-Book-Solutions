#include <iostream>
#define PI 3.14
using namespace std;

int main()
{
	float radius = 10;
	float area = PI * radius * radius;
	float price = 100;
	float pricePerSquareInch = area / price;
	cout << pricePerSquareInch << endl;

	return 0;
}
