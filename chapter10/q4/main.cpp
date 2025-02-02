#include <iostream>
using namespace std;

void removeAt(int arr[], int& size, const int index)
{
	if (size <= 0)
	{
		cout << "Invalid Array size" << endl;
		return;
	}
	if (index >= size || index < 0)
	{
		cout << "Index is out of range" << endl;
		return;
	}
	for(int i = index; i < size; i++)
	{
		arr[i] = arr[i+1];
	}
	size--;
}

int printArr(const int arr[], const int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return 0;
}

int main()
{
	int arr[] = {1,36,4,2};
	int size = 4;
	printArr(arr, size);
	removeAt(arr, size, 0);
	printArr(arr, size);
	return 0;
}
