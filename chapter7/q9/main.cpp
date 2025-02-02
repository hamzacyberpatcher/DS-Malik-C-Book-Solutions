#include <iostream>
#include <string>
using namespace std;

void countVowel(string line, int& a, int& e, int& i, int& o, int& u);
void checkChar(char ch, int& a, int& e, int& i, int& o, int& u);


int main()
{
	string line;
	int a, e, i, o, u;
	a = e = i = o = u = 0;
	cout << "Enter a string: ";
	getline(cin, line);
	cout << "The string is " << line << endl;
	countVowel(line,a,e,i,o,u);
	cout << endl;
	cout << "a appears: " << a << endl;
	cout << "e appears: " << e << endl;
	cout << "i appears: " << i << endl;
	cout << "o appears: " << o << endl;
	cout << "u appears: " << u << endl;
	return 0;
}

void countVowel(string line, int& a, int& e, int& i, int& o, int& u)
{
	int l = line.length();
	for(int k = 0; k < l; k++)
	{
		checkChar(line[k],a,e,i,o,u);
	}
}

void checkChar(char ch, int& a, int& e, int& i, int& o, int& u)
{
	switch(ch)
	{
		case 'a':
			a++; break;
		case 'e':
			e++; break;
		case 'i':
			i++; break;
		case 'o':
			o++; break;
		case 'u':
			u++; break;
	}
	return;
}
