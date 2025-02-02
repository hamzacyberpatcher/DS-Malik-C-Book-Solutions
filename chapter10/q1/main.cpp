#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
	return;
}

void printArr(int arr[], int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

int seqSearch(int arr[], int size, int element)
{
	int i = 0;
	bool found = false;
	while(i < size && !found)
	{
		if (arr[i] == element)
		{
			found = true;
		}
		else
		{
			i++;
		}
	}
	if (found) return i;
	return -1;
}

int main()
{
	int arr[] = {1,3,5,7,222,0};
	int size = 6;
	printArr(arr, size);
	bubbleSort(arr, size);
	printArr(arr, size);
	cout << seqSearch(arr, size, 222) << endl;
	return 0;
}
