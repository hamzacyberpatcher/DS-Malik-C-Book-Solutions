#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter a number: ";
	cin >> n;

	int k = 0;

	cout << n << " ";

	int largest = n;
	int largestPos = 0;

	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		cout << n << " ";
		k++;

		if (n > largest)
		{
			largest = n;
			largestPos = k + 1;
		}
	}
	cout << endl << "k: " << k << endl;
	cout << "Largest: " << largest << endl;
	cout << "Largest Position: " << largestPos << endl;

	return 0;
}
