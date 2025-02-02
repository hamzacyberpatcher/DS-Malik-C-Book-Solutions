#include <iostream>
#include <string>
using namespace std;

enum days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

class dayType
{
	days today;
public:
	dayType();
	dayType(string);
	void printDay();
	string retDay();
	string nextDay();
	string prevDay();
	string addDays(int);
};

dayType::dayType()
{
	today = Monday;
	return;
}

dayType::dayType(string day)
{
	if (day == "Mon") today = Monday;
	else if (day == "Tue") today = Tuesday;
	else if (day == "Wed") today = Wednesday;
	else if (day == "Thurs") today = Thursday;
	else if (day == "Fri") today = Friday;
	else if (day == "Sat") today = Saturday;
	else if (day == "Sun") today = Sunday;
	return;
}

void dayType::printDay()
{
	switch(today)
	{
		case Monday:
			cout << "Monday"; break;
		case Tuesday:
			cout << "Tuesday"; break;
		case Wednesday:
			cout << "Wednesday"; break;
		case Thursday:
			cout << "Thursday"; break;
		case Friday:
			cout << "Friday"; break;
		case Saturday:
			cout << "Saturday"; break;
		case Sunday:
			cout << "Sunday"; break;
	}
	cout << endl;
	return;
}

string dayType::retDay()
{
	switch(today)
	{
		case Monday:
			return "Monday";
		case Tuesday:
			return "Tuesday";
		case Wednesday:
			return "Wednesday";
		case Thursday:
			return "Thursday";
		case Friday:
			return "Friday";
		case Saturday:
			return "Saturday";
		case Sunday:
			return "Sunday";
	}
	return "NIL";
}

string dayType::nextDay()
{
	days next = static_cast<days>(today + 1);
	if (next > 6)
		next = static_cast<days>(next - 7);
	switch(next)
	{
		case Monday:
			return "Monday";
		case Tuesday:
			return "Tuesday";
		case Wednesday:
			return "Wednesday";
		case Thursday:
			return "Thursday";
		case Friday:
			return "Friday";
		case Saturday:
			return "Saturday";
		case Sunday:
			return "Sunday";
	}
	return "NIL";
}

string dayType::prevDay()
{
	days prev = static_cast<days>(today - 1);
	if (prev < 0)
		prev = static_cast<days>(prev + 7);
	switch(prev)
	{
		case Monday:
			return "Monday";
		case Tuesday:
			return "Tuesday";
		case Wednesday:
			return "Wednesday";
		case Thursday:
			return "Thursday";
		case Friday:
			return "Friday";
		case Saturday:
			return "Saturday";
		case Sunday:
			return "Sunday";
	}
	return "NIL";
}

string dayType::addDays(int d)
{
	days newDay = static_cast<days>(today + d);
	if (newDay > 6)
		newDay = static_cast<days>(newDay - 7);
	if (newDay < 0)
		newDay = static_cast<days>(newDay + 7);
	switch(newDay)
	{
		case Monday:
			return "Monday";
		case Tuesday:
			return "Tuesday";
		case Wednesday:
			return "Wednesday";
		case Thursday:
			return "Thursday";
		case Friday:
			return "Friday";
		case Saturday:
			return "Saturday";
		case Sunday:
			return "Sunday";
	}
	return "NIL";
}

int main()
{
	dayType thisDay("Mon");
	string day = thisDay.addDays(-1);
	cout << day << endl;
	return 0;
}
