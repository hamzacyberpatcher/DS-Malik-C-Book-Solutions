#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	if (num >= 0 && num <= 35)
	{
		if (num <= 9)
		{
			cout << num;
		}
		else
		{
			cout << static_cast<char>(num + 55);
		}
	}
	else 
	{
		cout << "Invalid";
	}
	cout << endl;

	return 0;
}
