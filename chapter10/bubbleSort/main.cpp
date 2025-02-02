#include <iostream>
using namespace std;

void bubbleSort(int list[], int size)
{
	for(int iteration = 0; iteration < size; iteration++)
	{
		for(int index = 0; index < size - iteration; index++)
		{
			if (list[index] > list[index + 1]) swap(list[index], list[index+1]);
		}
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
	int list[] = {45,2,35,1,0};
	printList(list, 5);
	bubbleSort(list, 5);
	printList(list, 5);
	return 0;
}
