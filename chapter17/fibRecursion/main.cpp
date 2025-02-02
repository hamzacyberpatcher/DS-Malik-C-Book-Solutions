#include <iostream>
using namespace std;

int rFibNum(int a, int b, int n)
{
	if (n == 1) return a;
	if (n == 2) return b;
	return rFibNum(a,b,n-1) + rFibNum(a,b,n-2);
}

int main()
{
	int a, b, n;
	cout << "Enter the first fib number: ";
	cin >> a;
	cout << "Enter the second fib number: ";
	cin >> b;
	cout << "Enter the desired fib number: ";
	cin >> n;
	cout << "Result: " << rFibNum(a,b,n) << endl;
	return 0;
}
