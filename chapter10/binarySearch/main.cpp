#include <iostream>
using namespace std;

int binarySearch(int list[], int size, int item)
{
	int low = 0;
	int high = size - 1;
	int mid;
	bool found = false;
	while(low <= high && !found)
	{
		mid = (low + high) / 2;
		if (list[mid] == item) found = true;
		else if (list[mid] < item) low = mid + 1;
		else high = mid - 1;
	}

	if (found) return mid;
	return -1;
}

int main()
{
	int list[] = {1,2,3,4,5};
	int index = binarySearch(list, 5, 5);
	cout << index << endl;
	return 0;
}
