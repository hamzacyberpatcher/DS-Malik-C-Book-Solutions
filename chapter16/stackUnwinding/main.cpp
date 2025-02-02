#include <iostream>
#include <string>
using namespace std;

class except
{
	string msg;
public:
	except()
	{
		msg = "hehe";
	}
	except(string str)
	{
		msg = str;
	}
	string what()
	{
		return msg;
	}
};

void funA();
void funB();
void funC();

int main()
{
	try
	{
		funA();
	}
	catch(except xd)
	{
		cout << "Exception: " << xd.what() << endl;
	}
	return 0;
}

void funA()
{
	funB();
}

void funB()
{
	funC();
}

void funC()
{
	throw except("In Func C");
}
