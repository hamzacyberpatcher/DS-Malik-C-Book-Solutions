#include <iostream>
using namespace std;

int main()
{
	float baseSalary = 50000;
	int yearsOfService = 6;
	float SalesMade = 15000;
	float FinalSalary = baseSalary;

	if (yearsOfService <= 5)
	{
		FinalSalary += 10 * yearsOfService;
	}
	else
	{
		FinalSalary += 20 * yearsOfService;
	}

	if (SalesMade >= 5000 && SalesMade < 10000)
	{
		FinalSalary += SalesMade * 0.03;
	}
	else if (SalesMade >= 10000)
	{
		FinalSalary += SalesMade * 0.06;
	}

	cout << FinalSalary << endl;
}
