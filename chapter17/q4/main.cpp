#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
	switch(tolower(ch))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
			break;
		default:
			return false;
	}
}

int countVowels(string str, int index = 0)
{
	if (index == str.length()) return 0;
	int count = isVowel(str[index]) ? 1 : 0;
	return count + countVowels(str, index+1);
}

int main()
{
	cout << countVowels("AAAB") << endl;
	return 0;
}
