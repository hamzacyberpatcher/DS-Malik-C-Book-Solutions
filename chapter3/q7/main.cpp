#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("inData.txt");

	string firstname, lastname;
	double salary, increase;

	for(int i = 0; i < 3; i++)
	{
		inFile >> lastname >> firstname >> salary >> increase;
		cout << "Name: " << firstname << " " << lastname << endl;
		salary += salary * (increase) / 100.0;
		cout << "Updated Salary: " << salary << endl;
	}

	return 0;
}
