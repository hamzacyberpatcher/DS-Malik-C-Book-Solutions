#include <iostream>
#include <cctype>
#include <type_traits>
using namespace std;

bool isVowel(char);

int main()
{
	char ch;

	cout << "Enter a character: ";
	cin >> ch;

	if (isVowel(ch))
		cout << ch << " is a vowel";
	else
		cout << ch << " is not a vowel";

	cout << endl;

	return 0;

}

bool isVowel(char ch)
{
	ch = tolower(ch);

	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}
