#include <iostream>
#include "complexType.h"
using namespace std;

int main()
{
	complexType compA(2,4), compB(3,4);
	cout << compA + compB << endl;
	cout << compA - compB << endl;
	cout << !compA << endl;
	cout << compA * compB << endl;
	cout << compA / compB << endl;
	return 0;
}
