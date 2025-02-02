#include <iostream>
using namespace std;

void print(int n)
{
	if (n > 0)
	{
		for(int i = 0; i < n; i++) cout << "*";
		cout << endl;
		print(n - 1);
	}
}

int main()
{
	print(4);
	return 0;
}
