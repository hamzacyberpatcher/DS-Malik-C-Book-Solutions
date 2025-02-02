#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string letters;
	int i = 0;

	cout << "Telephone code to number converter" << endl;

	do
	{
		cout << "Enter the telephone code in letters: (# to exit)";
		cin >> letters;
		if (!letters.compare("#"))
			break;
		cout << "The telephone code entered is " << letters << endl;
		cout << "The corresponding telephone number is: ";
		for (int i = 0, j = 0; i < letters.length() && j < 7; i++, j++)
		{
			if (i == 3)
			{
				cout << '-';
			}
			switch(tolower(letters[i]))
			{
				case 'a':
				case 'b':
				case 'c':
					cout << 2; break;
				case 'd':
				case 'e':
				case 'f':
					cout << 3; break;
				case 'g':
				case 'h':
				case 'i':
					cout << 4; break;
				case 'j':
				case 'k':
				case 'l':
					cout << 5; break;
				case 'm':
				case 'n':
				case 'o':
					cout << 6; break;
				case 'p':
				case 'q':
				case 'r':
				case 's':
					cout << 7; break;
				case 't':
				case 'u':
				case 'v':
					cout << 8; break;
				case 'w':
				case 'x':
				case 'y':
				case 'z':
					cout << 9; break;
			}
		}
		cout << endl;
	} while (i == 0);

	return 0;
}
