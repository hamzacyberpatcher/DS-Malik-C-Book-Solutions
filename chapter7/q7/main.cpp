#include <iostream>
using namespace std;

bool isLeap(int year);
int numDay(int day, int month, int year);

int main()
{
	int day, month, year;
	cout << "Enter the day: "; cin >> day;
	cout << "Enter the month: "; cin >> month;
	cout << "Enter the year: "; cin >> year;
	int num = numDay(day, month, year);
	cout << "Day of the year is " << num << endl; return 0;
}

bool isLeap(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0)) return true;
	else if ((year % 100 == 0) && (year % 400 == 0)) return true;
	return false;
}

int numDay(int day, int month, int year)
{
	if (month == 1) return day;
	int num = 0;
	for (int i = 1; i <= month - 1; i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				num += 31; break;
			case 4:
			case 6:
			case 9:
			case 11:
				num += 30; break;
			case 2:
				if (isLeap(year)) num += 29;
				else num += 28; break;
		}
	}
	num += day;
	return num;
}
