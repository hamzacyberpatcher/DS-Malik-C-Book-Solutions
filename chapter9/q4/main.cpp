#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 8;


void rangeCounter(ifstream& inFile, int ranges[], int& num)
{
	int score;
	inFile >> score;
	while(score != -1)
	{
		num++;
		if (score >= 0 && score <= 24) ranges[0]++;
		else if (score >= 25 && score <= 49) ranges[1]++;
		else if (score >= 50 && score <= 74) ranges[2]++;
		else if (score >= 75 && score <= 99) ranges[3]++;
		else if (score >= 100 && score <= 124) ranges[4]++;
		else if (score >= 125 && score <= 149) ranges[5]++;
		else if (score >= 150 && score <= 174) ranges[6]++;
		else if (score >= 175 && score <= 200) ranges[7]++;
		inFile >> score;
	}
	return;
}

int main()
{
	ifstream inFile;
	int num = 0;
	inFile.open("scores.dat");
	int ranges[SIZE] = {0};
	rangeCounter(inFile, ranges, num);
	cout << "Number of students are " << num << endl;
	cout << "Marks ranging from 0-24: " << ranges[0] << endl;
	cout << "Marks ranging form 25-49: " << ranges[1] << endl;
	cout << "Marks ranging form 50-74: " << ranges[2] << endl;
	cout << "Marks ranging form 75-99: " << ranges[3] << endl;
	cout << "Marks ranging form 100-124: " << ranges[4] << endl;
	cout << "Marks ranging form 125-149: " << ranges[5] << endl;
	cout << "Marks ranging form 150-174: " << ranges[6] << endl;
	cout << "Marks ranging from 175-200: " << ranges[7] << endl;
	return 0;
}
