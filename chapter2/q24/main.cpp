#include <iostream>
using namespace std;

int main()
{
	const int POUNDS_IN_A_METRIC_TON = 2205;

	int capacity;
	
	cout << "How many pounds of rice can a bag hold : ";
	cin >> capacity;

	int bagsNeeded = POUNDS_IN_A_METRIC_TON / capacity;

	cout << "Bags required : " << bagsNeeded << endl;

	return 0;
}
