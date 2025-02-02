#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void openFiles(ifstream&, ofstream&);
void initialize(int&, int&, double&, double&);
void sumGrades(ifstream&, int&, int&, double&, double&);
void averageGrades(double&, double&, double&, double&, int&, int&);
void printResults(ofstream&, double&, double&);

int main()
{
	ifstream inFile;
	ofstream outFile;
	openFiles(inFile, outFile);
	int countMale, countFemale;
	double sumMaleGPA, sumFemaleGPA;
	double maleAvg, femaleAvg;
	initialize(countMale, countFemale, sumFemaleGPA, sumMaleGPA);
	sumGrades(inFile, countMale, countFemale, sumMaleGPA, sumFemaleGPA);
	averageGrades(maleAvg, femaleAvg, sumMaleGPA, sumFemaleGPA, countMale, countFemale);
	printResults(outFile, maleAvg, femaleAvg);
	return 0;

}

void openFiles(ifstream& inFile, ofstream& outFile)
{
	inFile.open("gpa.dat");
	outFile.open("result.dat");
	if (!inFile)
	{
		cout << "Error" << endl;
	}
	outFile << fixed << showpoint << setprecision(2);
	return;
}

void initialize(int& countFemale, int& countMale, double& sumFemaleGPA, double& sumMaleGPA)
{
	countFemale = countMale = sumMaleGPA = sumFemaleGPA = 0;
	return;
}

void sumGrades(ifstream& inFile, int& countMale, int& countFemale, double& sumMaleGPA, double& sumFemaleGPA)
{
	char gender; double gpa;
	inFile >> gender;
	inFile >> gpa;
	while(gender != 'e')
	{
		if (gender == 'm')
		{
			countMale++;
			sumMaleGPA += gpa;
		}
		else if (gender == 'f')
		{
			countFemale++;
			sumFemaleGPA += gpa;
		}
		inFile >> gender >> gpa;
	}
	return;
}

void averageGrades(double& maleAvg, double& femaleAvg, double& sumMaleGPA, double& sumFemaleGPA, int& countMale, int& countFemale)
{
	maleAvg = (double) sumMaleGPA / countMale;
	femaleAvg = (double) sumFemaleGPA / countFemale;
	return;
}

void printResults(ofstream& outFile, double& maleAvg, double& femaleAvg)
{
	outFile << fixed << showpoint << setprecision(2);
	outFile << "The male avergae is " << maleAvg << endl;
	outFile << "The female average is " << femaleAvg << endl;
	return;
}
