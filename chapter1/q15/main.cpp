#include <iostream>
using namespace std;

int main()
{
	int testscore1 = 75; float weight1 = 0.20;
	int testscore2 = 96; float weight2 = 0.35;
	int	testscore3 = 85; float weight3 = 0.15;
	int testscore4 = 65; float weight4 = 0.30;

	float sum = (weight1*testscore1) + (weight2*testscore2) + (weight3*testscore3) + (weight4*testscore4);
	float avg = sum / (weight1 + weight2 + weight3 + weight4);

	cout << avg << endl;

	return 0;
}
