#include <iostream>
using namespace std;

int sumSquares(int n)
{
	if (n == 0) return 0;
	return n*n + sumSquares(n - 1);
}

int main()
{
	cout << sumSquares(3) << endl;
	return 0;
}
