#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int seconds;

	cout << "Input the time in seconds : ";
	cin >> seconds;

	int hours = seconds / 3600;


	int remSec = seconds % 3600;

	int minutes = remSec / 60;


	remSec = remSec % 60;

	cout << hours << " : " << minutes << " : " << remSec << endl;

	return 0;
}
