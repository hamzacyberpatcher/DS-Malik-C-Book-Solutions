#include <iostream>
using namespace std;

int main()
{
	char str[30];
	cout << "Enter a string: ";
	cin.get(str, 30);
	for(int i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
	return 0;
}
