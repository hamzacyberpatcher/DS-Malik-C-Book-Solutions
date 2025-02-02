#include <iostream>
#include <cmath>
using namespace std;

int reverseNumberHelper(int num, int digits)
{
	if (num == 0) return 0;
	return (num % 10) * pow(10, digits) + reverseNumberHelper(num / 10, digits - 1);
}

int reverseNumber(int num)
{
	int digits = log10(num);
	return reverseNumberHelper(num, digits);
}

int main()
{
	cout << reverseNumber(1234) << endl;
	return 0;
}
