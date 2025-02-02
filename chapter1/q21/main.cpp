#include <iostream>
using namespace std;

int main()
{
	int pages;

	cout << "No of pages : ";
	cin >> pages;

	int addPages = 0;

	float charges = 3;

	if (pages <= 10)
	{
		charges += (pages) * 20;
	}
	else
	{
		addPages = pages - 10;
		charges += (addPages) * 0.1;
		charges += 10 * 20;
	}

	cout << "Amount Due : " << charges << endl;

	return 0;
}
