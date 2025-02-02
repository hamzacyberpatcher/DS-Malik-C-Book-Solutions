#include <iostream>
#include <string>
using namespace std;

class clockType
{
	int hr;
	int min;
	int sec;
public:
	clockType();
	clockType(int, int, int);
	void setTime(const int&, const int&, const int&);
	void getTime(int&, int&, int&) const;
	void print() const;
	void incHr();
	void incMin();
	void incSec();
};

clockType::clockType()
{
	hr = min = sec = 0;
}

clockType::clockType(int h, int m, int s)
{
	(h > 23) ? hr = 0 : hr = h;
	(m > 60) ? min = 0 : min = m;
	(s > 60) ? sec = 0 : sec = s;
}

void clockType::setTime(const int & h, const int & m, const int & s)
{
	(h > 23) ? hr = 0 : hr = h;
	(m > 60) ? min = 0 : min = 60;
	(s > 60) ? sec = 0 : sec = 60;
	return;
}

void clockType::getTime(int& h, int& m, int& s) const
{
	h = hr; s = sec; m = min;
	return;
}

void clockType::print() const
{
	cout << hr << " : " << min << " : " << sec << endl;
	return;
}

void clockType::incHr()
{
	hr++;
	if (hr > 23) hr = 0;
	return;
}

void clockType::incMin()
{
	min++;
	if (min > 60) min = 0;
	return;
}

void clockType::incSec()
{
	sec++;
	if (sec > 60) sec = 0;
	return;
}

class extClockType : public clockType
{
	string timezone;
public:
	extClockType();
	extClockType(int, int, int, string);
	void setTimeZone(string);
	void getTimeZone(string&) const;
	void print() const;
};

extClockType::extClockType()
{
	clockType();
	timezone = "";
}

extClockType::extClockType(int h, int m, int s, string t) : clockType::clockType(h, m, s)
{
	timezone = t;
}

void extClockType::setTimeZone(string t)
{
	timezone = t;
	return;
}

void extClockType::getTimeZone(string& t) const
{
	t = timezone;
	return;
}

void extClockType::print() const
{
	int h, m, s;
	clockType::getTime(h, m, s);
	cout << h << " : " << m << " : " << s << " " << timezone << endl;
}

int main()
{
	extClockType myClock(12,5,6, "PST");
	myClock.print();
	return 0;
}
