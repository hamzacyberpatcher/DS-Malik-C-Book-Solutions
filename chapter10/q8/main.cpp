#include <iostream>
#include <string>
using namespace std;

void selectionSort(string arr[], int size)
{
	int smallest;
	for(int i =  0; i < size; i++)
	{
		smallest = i;
		for(int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[smallest])
			{
				smallest = j;
			}
		}
		arr[smallest].swap(arr[i]);
	}
	return;
}

void printArr(const string arr[], const int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

int main()
{
	string arr[] = {"Hello", "meow", "dalla", "A"};
	int size = 4;
	printArr(arr, size);
	selectionSort(arr, size);
	printArr(arr, size);
	return 0;
}
