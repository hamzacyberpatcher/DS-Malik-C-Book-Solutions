#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
	}
	return false;
}

void removeVowels(string& str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if (isVowel(str.at(i)))
		{
			str.erase(str.begin() + i);
		}
	}
	return;
}

int main()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	removeVowels(str);
	cout << "Output: " << str << endl;
	return 0;
}
