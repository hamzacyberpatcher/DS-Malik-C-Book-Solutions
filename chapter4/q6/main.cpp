#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	double hyp, base, prep;
	
	cout << "Enter the lengths of the thress sides of the triangle: ";
	cin >> a >> b >> c;

	if ((a > b) && (a > c))
	{
		hyp = a;
		base = b;
		prep = c;
	}
	else if ((b > a) && (b > c))
	{
		hyp = b;
		base = a;
		prep = c;
	}
	else if ((c > a) && (c > b))
	{
		hyp = c;
		base = a;
		prep = b;
	}
	else if ((a == b) && (b == c))
	{
		hyp = a;
		base = b;
		prep = c;
	}

	if (pow(hyp, 2.0) == pow(base, 2.0) + pow(prep, 2.0))
	{
		cout << "It is a right angled triangle" << endl;
	}
	else 
	{
		cout << "It is not a right angles triangle" << endl;
	}

	return 0;


}
