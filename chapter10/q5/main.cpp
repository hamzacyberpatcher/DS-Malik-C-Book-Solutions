#include <iostream>
using namespace std;

int seqSearch(const int arr[], const int size, const int element)
{
	int found = false;
	int i = 0;
	while(i < size && !found)
	{
		if (arr[i] == element) found = true;
		else i++;
	}
	if (found) return i;
	return -1;
}

void removeAll(int arr[], int& size, const int element)
{
	if (size <= 0)
	{
		cout << "Invalid Array Size." << endl;
		return;
	}

	int loc = seqSearch(arr, size, element);
	while(loc != -1)
	{
		for(int i = loc; i < size; i++)
		{
			arr[i] = arr[i+1];
		}
		size--;
		loc = seqSearch(arr, size, element);
	}
	return;
}

void printArr(const int arr[], const int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

int main()
{
	int arr[] = {1,2,1,4};
	int size = 4;
	printArr(arr, size);
	removeAll(arr, size, 1);
	printArr(arr, size);
	return 0;
}
