#include <iostream>
using namespace std;

int sumArr(int list[], int n, int i = 0)
{
	if (n == i) return 0;
	return list[i] + sumArr(list, n, i+1);
}

int main()
{
	int list[] = {1,2,3};
	cout << sumArr(list, 3) << endl;
	return 0;
}
