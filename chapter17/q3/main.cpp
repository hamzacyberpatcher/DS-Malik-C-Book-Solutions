#include <iostream>
using namespace std;

void printline(int n, int upper)
{
	int spaces = upper - n;
	for(int i = 0; i < spaces; i++) cout << " ";
	for(int i = 0; i < n; i++) cout << "* ";
	cout << endl;
	return;
}

void printAscending(int n, int upper)
{
	if (n <= upper)
	{
		printline(n, upper);
		printAscending(n+1, upper);
	}
}

void printDescending(int n, int upper)
{
	if (n > 0)
	{
		printline(n, upper);
		printDescending(n - 1, upper);
	}
}

void print(int n)
{
	printAscending(1, n);
	printDescending(n - 1, n);
}

int main()
{
	int n;
	cout << "Enter the amount of lines: ";
	cin >> n;
	print(n);
	return 0;
}
