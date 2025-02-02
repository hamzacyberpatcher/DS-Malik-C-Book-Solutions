#include <iostream>
using namespace std;

int main()
{
	double num;
	cout << "Enter a number of type double : ";
	cin >> num;

	int n = static_cast<int>(num);

	cout << n << endl;
	return 0;
}
