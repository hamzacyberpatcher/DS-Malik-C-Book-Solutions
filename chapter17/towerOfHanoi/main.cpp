#include <iostream>
using namespace std;

void moveDisks(int count, char needle1, char needle3, char needle2)
{
	if (count > 0)
	{
		moveDisks(count - 1, needle1, needle2, needle3);
		cout << "Move disks " << count << " from " << needle1 << " to " << needle3 << endl;
		moveDisks(count - 1, needle2, needle3, needle1);
	}
}

int main()
{
	moveDisks(3,'A','C','B');
	return 0;
}
