#include <iostream>
using namespace std;

int main()
{
	 int n;

	 cout << "Enter the number of lockers: ";
	 cin >> n;

	 int divisors = 0;

	 cout << "The lockers which are opened are: ";

	 for(int i = 1; i <= n; i++)
	 {
		 divisors = 0;
		 for(int j = 1; j <= i; j++)
		 {
			if (i % j == 0)
				divisors++;
		 }
		 if (divisors % 2 != 0)
			 cout << i << " ";
	 }
	cout << endl;
	 return 0;
}
