#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long num;
	long temp;
	int length = 0;

	cout << "Enter a number: ";
	cin >> num;

	temp = num;

	while(temp != 0)
	{
		temp /= 10;
		length++;
	}

	temp = num;
	int sum = 0;
	int digit;
	int summation;

	for (int i = length; i > 0; i--)
	{
		digit = temp / pow(10, i - 1);
		temp -= digit * pow(10, i - 1);
		summation = pow(-1, i - 1);
		sum += digit * summation;
	}

	if (sum % 11 == 0)
		cout << "The number is divisible by 11" << endl;
	else
		cout << "The number is not divisible by 11" << endl;

	return 0;
}
