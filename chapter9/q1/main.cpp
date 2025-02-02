#include <iostream>
using namespace std;

const int SIZE = 50;

void initializeArr(double arr[])
{
	for(int i = 0; i <= 24; i++)
	{
		arr[i] = i * i;
	}
	for(int i = 25; i < SIZE; i++)
	{
		arr[i] = i * i * i;
	}
	return;
}

void printArr(double arr[])
{
	for(int i = 0; i <= 4; i++)
	{
		for(int j = 0; j <= 10; j++)
		{
			cout << arr[i*10 + j] << "  ";
		}
		cout << endl;
	}
	return;
}

int main()
{
	double alpha[50];
	initializeArr(alpha);
	printArr(alpha);
	return 0;
}
