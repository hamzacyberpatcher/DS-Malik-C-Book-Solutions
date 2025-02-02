#include <iostream>
using namespace std;

int main()
{
	try
	{
		int *list[100];
		for(int i = 0; i < 100; i++)
		{
			list[i] = new int[50000000000000000];
			cout << "itr" << endl;
		}
	}
	catch(bad_alloc be)
	{
		cout << "Exception: " << be.what() << endl;
	}
	return 0;
}
