#include <iostream>
using namespace std;

void printline(int n)
{
	for(int i = 0; i < n; i++) cout << "*";
	cout << endl;
}

void printAscending(int n, int limit)
{
	if (n <= limit)
	{
		printline(n);
		printAscending(n + 1, limit);
	}
}

void printDescending(int n)
{
	if (n > 0)
	{
		printline(n);
		printDescending(n - 1);
	}
}

void print(int n)
{
	printAscending(1, n);
	printDescending(n);
}

int main()
{
	print(4);
	return 0;
}
