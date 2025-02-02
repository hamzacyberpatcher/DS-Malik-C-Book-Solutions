#include <iostream>
using namespace std;

int main()
{
	int magicNum = 69;
	int GuessNum;
	do
	{
		cout << "give ur guess : ";
		cin >> GuessNum;
		if (GuessNum < magicNum)
		{
			cout << "Less than the magic Number";
		}
		else if (GuessNum > magicNum)
		{
			cout << "Greater than the magic number";
		}
		cout << endl;
	} while(magicNum != GuessNum);
	cout << "u got it" << endl;
	return 0;
}
