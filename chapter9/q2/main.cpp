#include <iostream>
using namespace std;

const int SIZE = 5;

int smallest(int arr[], int size)
{
	int small = arr[0];
	for(int i = 0; i < size; i++)
	{
		if (arr[i] < small) small = arr[i];
	}
	return small;
}

int lastOccurence(int arr[], int size)
{
	int small = smallest(arr, size);
	int occurence;
	for(int i = 0; i < size; i++)
	{
		if (arr[i] == small)
		{
			occurence = i;
			break;
		}
	}
	return occurence;
}

int main()
{
	int arr[SIZE] = {5,2,6,1,1};
	cout << lastOccurence(arr, SIZE) << endl;
	return 0;
}
