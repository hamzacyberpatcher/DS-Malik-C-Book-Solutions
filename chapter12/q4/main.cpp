#include <iostream>
using namespace std;

class clockType
{
	int hr;
	int min;
	int sec;
public:
	clockType();
	clockType(int, int, int);
	void setTime(const int, const int, const int);
	void getTime(int&, int&, int&);
};

clockType::clockType()
{
	hr = min = sec = 0;
}

clockType::clockType(int h, int m, int s)
{
	hr = h;
	if (hr > 23) hr = 0;
	min = m;
	if (min > 60) min = 0;
	sec = s;
	if (sec > 60) sec = 0;
	return;
}

void clockType::setTime(const int h, const int m, const int s)
{
	hr = h;
	if (hr > 23) hr = 0;
	min = m;
	if (min > 60) min = 0;
	sec = s;
	if (sec > 60) sec = 0;
	return;
}

void clockType::getTime(int& h, int& m, int& s)
{
	h = hr;
	m = min;
	s = sec;
	return;
}

int main()
{
	clockType clock(12,5,6);
	int hr, min, sec;
	clock.getTime(hr, min, sec);
	cout << hr << endl << min << endl << sec << endl;
	return 0;
}
