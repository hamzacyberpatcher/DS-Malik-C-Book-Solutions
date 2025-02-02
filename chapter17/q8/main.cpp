#include <iostream>
#include <string>
using namespace std;

void reverse(string& str, int i = 0)
{
	if (i < str.length())
	{
		cout << str[str.length() - 1 - i];
		reverse(str, i + 1);
	}
}

int main()
{
	string str = "Hamza";
	reverse(str);
	return 0;
}
