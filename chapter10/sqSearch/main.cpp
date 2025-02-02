#include <iostream>
using namespace std;

int SequentialSearch(int list[], int size, int item)
{
	bool found = false;
	int loc = 0;
	
	while(loc < size && !found)
	{
		if (list[loc] == item) found = true;
		else loc++;
	}

	if (found) return loc;
	return -1;
}

int main()
{
	int list[] = {1,2,3,4,6};
	cout << SequentialSearch(list, 5, 6) << endl;
	return 0;
}
