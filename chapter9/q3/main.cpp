#include <iostream>
using namespace std;

const int SIZE = 5;

int largest(int arr[], int size)
{
	int large = arr[0];
	for(int i = 0; i < size; i++)
	{
		if (arr[i] > large) large = arr[i];
	}
	return large;
}

int lastLargestOccurence(int arr[], int size)
{
	int large = largest(arr, size);
	int occurence = -1;
	for(int i = 0; i < size; i++)
	{
		if (arr[i] == large) occurence = i;
	}
	return occurence;
}

int main()
{
	int arr[SIZE] = {1,2,8,7,8};
	cout << lastLargestOccurence(arr, SIZE) << endl;
	return 0;
}
