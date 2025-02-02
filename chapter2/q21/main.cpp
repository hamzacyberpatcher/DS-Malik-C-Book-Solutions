#include <iostream>
#include <string>
#define E cout<<endl
using namespace std;

int main()
{
	string a, b, c;
	cout << "Enter the first string : ";
	cin >> a;
	cout << "Enter the second string : ";
	cin >> b;
	cout << "Enter the third string : ";
	cin >> c;

	cout << "Permutations : "; E;
	cout << a << b << c; E;
	cout << a << c << b; E;
	cout << b << a << c; E;
	cout << b << c << a; E;
	cout << c << a << b; E;
	cout << c << b << a; E;

	return 0;
}
