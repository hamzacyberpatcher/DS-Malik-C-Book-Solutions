#include <iostream>
using namespace std;

void insertionSort(int list[], int size)
{
	int temp, location;
	for(int firstOutOfOrder = 1; firstOutOfOrder < size; firstOutOfOrder++)
	{
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
		{
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;
			do
			{
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;
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
	int list[] = {1,3,0,5,7,7};
	int size = 6;
	printList(list, size);
	insertionSort(list, size);
	printList(list, size);
	return 0;
}
