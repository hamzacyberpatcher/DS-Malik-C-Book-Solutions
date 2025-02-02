#include <iostream>
using namespace std;

int main()
{
	float SalesPrice = 60000;
	float StateTax = SalesPrice * 0.04;
	float CityTax = SalesPrice * 0.015;
	float LuxuryTax = 0;
	if (SalesPrice >= 50000)
	{
		LuxuryTax = SalesPrice * 0.1;
	}

	float FinalPrice = SalesPrice + StateTax + CityTax + LuxuryTax;
	cout << SalesPrice << endl;
	cout << StateTax << endl;
	cout << CityTax << endl;
	cout << LuxuryTax << endl;
	cout << FinalPrice << endl;
	return 0;
}
