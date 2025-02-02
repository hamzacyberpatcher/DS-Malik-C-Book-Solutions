#include <iostream>
#include <string>
#include <vector>
using namespace std;

void init(int list[], const int size)
{
	srand(time(NULL));
	for(int i = 0; i < size; i++)
	{
		list[i] = rand();
	}
}

void printArr(const int arr[], const int size)
{
	for(int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
	return;
}

void bubbleSort(int arr[], const int size, int& comp, int& as)
{
	comp = 0;
	as = 0;
	
	for(int i = 1; i < size; i++)
	{
		for(int j = 0; j < size - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				as++;
			}
			comp++;
		}
	}
	return;
}

void selectionSort(int arr[], const int size, int& comp, int& as)
{
	int smallest;
	comp = 0;
	as = 0;
	for(int i = 0; i < size; i++)
	{
		smallest = i;
		for(int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[smallest])
			{
				smallest = j;
				comp++;
			}
		}
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);
			as++;
		}
	}
}

void insertionSort(int arr[], const int size, int& comp, int& as)
{
	comp = 0;
	as = 0;
	int temp, location;
	for(int firstOutOfOrder = 1; firstOutOfOrder < size; firstOutOfOrder++)
	{
		if (arr[firstOutOfOrder] < arr[firstOutOfOrder - 1])
		{
			location = firstOutOfOrder;
			temp = arr[firstOutOfOrder];
			comp++;
			do
			{
				arr[location] = arr[location - 1];
				location--;
			} while(location > 0 && arr[location - 1] > temp);
			arr[location] = temp;
			as++;
		}
	}
}

int main()
{
	int list1[5000];
	int list2[5000];
	int list3[5000];
	int as, comp;
	int size = 5000;
	init(list1, size);
	init(list2, size);
	init(list3, size);

	bubbleSort(list1, size, comp, as);
	cout << "Bubble Sort:" << endl;
	cout << "Assignments: " << as << endl;
	cout << "Comparison: " << comp << endl << endl;

	selectionSort(list2, size, comp, as);
	cout << "Selection Sort:" << endl;
	cout << "Assignments: " << as << endl;
	cout << "Comparison: " << comp << endl << endl;

	insertionSort(list3, size, comp, as);
	cout << "Insertion Sort:" << endl;
	cout << "Assignments: " << as << endl;
	cout << "Comparison: " << comp << endl;

	return 0;
}
