#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	const double PI = 3.141592653589793238462643;
	ifstream inFile;
	inFile.open("inData.txt");

	double length;
	double width;
	double radius;
	string firstname;
	string secondname;
	int age;
	double balance;
	double interest;
	char ch;

	inFile >> length >> width >> radius >> firstname >> secondname >> age >> balance >> interest >> ch;

	interest = interest;

	
	ofstream outFile;
	outFile.open("outData.txt");
	outFile << setprecision(2) << fixed;
	outFile << "Rectangle:" << endl;
	outFile << "Length = " << length << ", " << "width = " << width << ", ";
	outFile << "area = " << length*width << ", " << "parameter = " << 2 * (length + width);
	outFile << endl << endl;

	outFile << "Circle:" << endl;
	outFile << "Radius = " << radius << ", " << "area = " << PI*radius*radius << ", " << endl;
	outFile << "circumference = " << 2 * PI * radius << endl << endl;

	outFile << "Name: " << firstname << " " << secondname << ", " << "age: " << age << endl;
	outFile << "Beginning balance = $" << balance << ", " << "interest rate = " << interest << endl;
	outFile << "Balance at the end of the month = $" << balance + (balance * (interest)/1200.0) << endl << endl;

	outFile << "The character that comes after " << ch << " is " << static_cast<char>(ch + 1) << endl;

	inFile.close();
	outFile.close();
		
	return 0;
}
