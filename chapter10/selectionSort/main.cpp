#include <iostream>
using namespace std;

void selectionSort(int list[], int size)
{
	int smallIndex;
	for(int i = 0; i < size; i++)
	{
		smallIndex = i;
		for(int j =  i + 1; j < size; j++)
			if (list[j] < list[smallIndex]) smallIndex = j;
		swap(list[i], list[smallIndex]);
	}
	return;
}

void printList(int list[], int size)
{
	for(int i = 0; i < size; i++) cout << list[i] << " ";
	cout << endl;
	return;
}

int main()
{
	int list[] = {23,3,1,6,9};
	int size = 5;
	printList(list, size);
	selectionSort(list, size);
	printList(list, size);
	return 0;
}
