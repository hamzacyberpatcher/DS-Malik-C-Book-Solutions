#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char gender;
	double bodyWeight, wristMeasureFullest, wristMeasureNavel, hipMeasure, forearmMeasure, bodyFat, bodyFatPercent;
	double A1, A2, A3, A4, A5, B;

	cout << "Enter your gender: (m for male, f for female) ";
	cin >> gender;

	cout << fixed << showpoint << setprecision(2);

	switch(gender)
	{
		case 'm':
			cout << "Enter your body weight: ";
			cin >> bodyWeight;
			cout << "Enter the wrist measurement: ";
			cin >> wristMeasureFullest;
			A1 = (bodyWeight * 1.082) + 94.42;
			A2 = wristMeasureFullest * 4.15;
			B = A1 - A2;
			bodyFat = bodyWeight - B;
			bodyFatPercent = (bodyFat * 100) / bodyWeight;
			cout << "Your body fat percentage is " << bodyFatPercent << "%" << endl;
			break;
		case 'f':
			cout << "Enter your body weight: ";
			cin >> bodyWeight;
			cout << "Enter wrist measurement (at fullest point): ";
			cin >> wristMeasureFullest;
			cout << "Enter wrist measurement (at navel): ";
			cin >> wristMeasureNavel;
			cout << "Enter hip measurement: ";
			cin >> hipMeasure;
			cout << "Enter forearm measurement (at fullest point): ";
			cin >> forearmMeasure;
			A1 = (bodyWeight * 0.732) + 8.987;
			A2 = wristMeasureFullest / 3.140;
			A3 = wristMeasureNavel * 0.157;
			A4 = hipMeasure * 0.249;
			A5 = forearmMeasure * 0.434;
			B = A1 + A2 - A3 - A4 + A5;
			bodyFat = bodyWeight - B;
			bodyFatPercent = (bodyFat * 100) / bodyWeight;
			cout << "Your body fat percentage is " << bodyFatPercent << "%" << endl;
			break;
		default:
			cout << "I cannot handle a gazillion other genders" << endl;
			break;
	}
	return 0;
}
