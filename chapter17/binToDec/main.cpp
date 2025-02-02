#include <iostream>
#include <cmath>
using namespace std;

void binToDec(int binNum, int& decimal, int& weight)
{
	if (binNum > 0)
	{
		int bit = binNum % 10;
		decimal += bit*static_cast<int>(pow(2.0, weight));
		weight++;
		binNum /= 10;
		binToDec(binNum, decimal, weight);
	}
}

int main()
{
	int decimal = 0;
	int weight = 0;
	binToDec(1100, decimal, weight);
	cout << decimal << endl;
	return 0;
}
