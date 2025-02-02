#include <iostream>
#include <cmath>
using namespace std;

int reverseDigit(int);

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << "Reverse Number: " << reverseDigit(num) << endl;
	return 0;
}

int reverseDigit(int num)
{
	int length = 0;
	int temp = num;

	while(temp != 0)
	{
		temp /= 10;
		length++;
	}
	int last_digit, new_num = 0;
	temp = num;

	for(int i = length; i > 0; i--)
	{
		last_digit = temp % 10;
		temp /= 10;
		new_num += last_digit * pow(10, i - 1);
	}

	return new_num;

}
