#include <iostream>
#include <cmath>
using namespace std;

bool isNumPalindrome(int);

int main()
{
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if (isNumPalindrome(num))
		cout << num << " is palindrome";
	else
		cout << num << " is not palindrome";

	cout << endl;

	return 0;
}

bool isNumPalindrome(int num)
{
	int pwr = 0;

	if (num < 10)
		return true;
	else
	{
		while (num / static_cast<int>(pow(10.0, pwr)) >= 10)
			pwr++;
		while (num >= 10)
		{
			int tenTopwr = static_cast<int>(pow(10.0, pwr));

			if ((num / tenTopwr) != (num % 10))
				return false;
			else
			{
				num = num % tenTopwr;
				num /= 10;
				pwr -= 2;
			}
		}

		return true;
	}
}
