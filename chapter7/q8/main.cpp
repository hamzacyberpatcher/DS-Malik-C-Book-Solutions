#include <iostream>
#include <string>
using namespace std;

int lowerVowel(string line);

int main()
{
	string line;
	cout << "Enter a string: ";
	getline(cin, line);
	cout << "Number of lower case vowels are " << lowerVowel(line) << endl;
	return 0;
}

int lowerVowel(string line)
{
	int num = 0;
	for(int i = 0; i < line.length(); i++)
	{
		switch(line.at(i))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				num++; break;
		}
	}
	return num;
}


