#include <iostream>
using namespace std;

int largest(const int list[], int lowerIndex, int upperIndex)
{
	int max;
	if (lowerIndex == upperIndex) return list[lowerIndex];
	else
	{
		max = largest(list, lowerIndex + 1, upperIndex);
		if (list[lowerIndex] > max) return list[lowerIndex];
		else return max;
	}
}

int main()
{
	int list[] = {1,4,6,3,2};
	cout << largest(list, 0, 4) << endl;
	return 0;
}
