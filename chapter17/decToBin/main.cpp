#include <iostream>
using namespace std;

void decToBin(int dec)
{
	if (dec > 0)
	{
		decToBin(dec / 2);
		cout << dec % 2;
	}
}

int main()
{
	decToBin(2);
	return 0;
}
