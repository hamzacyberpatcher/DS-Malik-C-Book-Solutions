#include <iostream>
using namespace std;

int main()
{
	double num;

	cout << "Enter a number: ";
	cin >> num;

	if (num == 0)
	{
		cout << "The number is zero";
	}
	else if (num < 0)
	{
		cout << "The number is negative";
	}
	else 
	{
		cout << "The number is positive";
	}

	cout << endl;

	return 0;
}
