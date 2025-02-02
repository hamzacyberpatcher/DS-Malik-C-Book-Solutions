#include <iostream>
#include <cmath>
using namespace std;

long length(long num);
void count(long num, int& even, int& odd, int& zero);

int main()
{
	long num;
	cout << "Enter a number: ";
	cin >> num;
	int even, odd, zero;
	count(num, even, odd, zero);
	cout << "Even digits: " << even << endl;
	cout << "Odd digits: " << odd << endl;
	cout << "Zero digits: " << zero << endl;
	return 0;
}

long length(long num)
{
	long l = 0;
	while(num != 0)
	{
		num /= 10;
		l++;
	}
	return l;
}

void count(long num, int& even, int& odd, int& zero)
{
	long digit;
	even = odd = zero = 0;
	for(long i = length(num); i > 0; i--)
	{
		digit = num / pow(10, i - 1);
		if (digit == 0) zero++;
		else if (digit % 2 == 0) even++;
		else odd++;
		num = num % (long) pow(10, i - 1);
	}
	return;
}
