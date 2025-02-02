#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
	int smallest;
	for(int i = 0; i < size; i++)
	{
		smallest = i;
		for(int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[smallest]) smallest = j;
		}
		swap(arr[i], arr[smallest]);
	}
	return;
}

void printArr(int arr[], int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

int binarySearch(int arr[], int size, int element)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int found = false;
	while(low <= high && !found)
	{
		mid = (low + high) / 2;
		if (arr[mid] == element) found = true;
		else if (arr[mid] < element) low = mid + 1;
		else high = mid - 1;
	}
	if (found) return mid;
	return -1;
}

int main()
{
	int arr[] = {1,2,5,8,44,3,0};
	int size = 7;
	printArr(arr, size);
	selectionSort(arr, size);
	printArr(arr, size);
	cout << binarySearch(arr, size, 44) << endl;
	return 0;
}
