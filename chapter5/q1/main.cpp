#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	int temp = num;
	int length = 0;

	while(temp % 10 != 0)
	{
		temp /= 10;
		length++;
	}
	
	temp = num;
	int digit;
	int sum = 0;

	for (int i = length; i > 0; i--)
	{
		digit = temp / pow(10, i - 1);
		cout << "Digit : " << digit << endl;
		temp -= digit * pow(10, i - 1);
		sum += digit;
	}
	
	cout << "Sum: " << sum << endl;

	return 0;
}
