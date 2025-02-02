#include <iostream>
using namespace std;

int seqSearch(const int arr[], const int size, const int element)
{
	bool found = false;
	int i = 0;
	while(i < size && !found)
	{
		if (arr[i] == element) found = true;
		else i++;
	}
	if (found) return i;
	return -1;
}

void remove(int arr[], int& size, const int item)
{
	int loc = seqSearch(arr, size, item);
	if (loc != -1)
	{
		for(int i = loc; i < size; i++)
		{
			arr[i] = arr[i+1];
		}
		size--;
	}
	else
	{
		cout << "Item not found." << endl;
	}
	return;
}

void printArr(int arr[], int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

int main()
{
	int arr[] = {1,8,4,6};
	int size = 4;
	printArr(arr, size);
	remove(arr, size, 4);
	printArr(arr, size);
	return 0;
}
