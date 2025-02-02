#include <iostream>
using namespace std;

class dateType
{
	int year;
	int month;
	int day;
	bool Leap;
public:
	dateType();
	dateType(int, int, int);
	void setDate(const int&, const int&, const int&);
	void getDate(int&, int&, int&) const;
	bool isLeap() const;
	void print() const;
};

dateType::dateType()
{
	year = 0;
	month = 0;
	day = 0;
	Leap = false;
}

dateType::dateType(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	(year % 4 == 0) ? Leap = true : Leap = false;
}

void dateType::setDate(const int& y, const int& m, const int& d)
{
	year =  y;
	month = m;
	day = d;
	(year % 4 == 0) ? Leap = true : Leap = false;
	return;
}

void dateType::getDate(int& y, int& m, int& d) const
{
	y = year;
	m = month;
	d = day;
	return;
}

bool dateType::isLeap() const
{
	return Leap;
}

void dateType::print() const
{
	cout << year << " " << month << " " << day << " ";
	Leap ? cout << "Leap" : cout << "Not Leap";
	cout << endl;
	return;
}

int main()
{
	dateType today(2024, 5, 30);
	today.print();
	return 0;
}
