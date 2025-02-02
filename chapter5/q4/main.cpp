#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	char letter;

	cout << "A program to convert letter to their corresponding telephone digits." << endl;

	cout << "To stop the program enter #." << endl;

	do
	{
		cout << "Enter a letter: " << endl;
		cin >> letter;
		cout << endl;

		cout << "The letter you entered is: " << letter << endl;
		cout << "The corresponding telephone digit is: ";

		switch(tolower(letter))
		{
			case 'a': 
			case 'b':
			case 'c':
				cout << 2 << endl;
				break;
			case 'd':
			case 'e':
			case 'f':
				cout << 3 << endl; break;
			case 'g':
			case 'h':
			case 'i':
				cout << 4 << endl; break;
			case 'j':
			case 'k':
			case 'l':
				cout << 5 << endl; break;
			case 'm':
			case 'n':
			case 'o':
				cout << 6 << endl; break;
			case 'p':
			case 'q':
			case 'r':
			case 's':
				cout << 7 << endl; break;
			case 't':
			case 'u':
			case 'v':
				cout << 8 << endl; break;
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				cout << 9 << endl; break;
			default:
				cout << "Invalid Input!" << endl;
		}
	} while (letter != '#');

	return 0;
}
