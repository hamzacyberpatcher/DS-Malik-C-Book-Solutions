#include <iostream>
using namespace std;

void insertAt(int arr[], int& elements, const int index, const int item)
{
	if (index < 0 || index >= elements)
	{
		cout << "Index is out of range." << endl;
		return;
	}
	for (int i = elements - 1; i >= index; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = item;
	elements++;
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
	int arr[] = {1,2,5, 0};
	int size = 3;
	printArr(arr, size);
	insertAt(arr, size, 1, 99);
	printArr(arr, size);
	return 0;

}
