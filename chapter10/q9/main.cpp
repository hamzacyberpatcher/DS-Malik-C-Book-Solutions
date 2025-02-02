#include <iostream>
#include <string>
using namespace std;

void printArr(const string arr[], const int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

void selectionSort(string arr[], const int size)
{
	int smallest;
	for(int i = 0; i < size; i++)
	{
		smallest = i;
		for(int j = i + 1; j < size; j++)
			if (arr[j] < arr[smallest])
				smallest = j;
		arr[smallest].swap(arr[i]);
	}
	return;
}

int binSearch(const string arr[], const int size, const string item)
{
	int low = 0;
	int high = size - 1;
	int mid;
	bool found = false;
	while(low <= high && !found)
	{
		mid = (low + high) / 2;
		if (arr[mid] == item) found = true;
		else if (arr[mid] < item) low = mid + 1;
		else high = mid - 1;
	}
	if (found) return mid;
	return -1;
}

int main()
{
	string arr[] = {"A", "C", "B"};
	int size = 3;
	selectionSort(arr, size);
	printArr(arr, size);
	cout << binSearch(arr, size, "B") << endl;
	return 0;
}
