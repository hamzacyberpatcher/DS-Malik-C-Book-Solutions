#include <iostream>
#include "listType.h"
using namespace std;

int main()
{
	listType<int> list(10);
	list[0] = 99;
	list[1] = 97;
	cout << list[1] << endl;
	listType<int> otherlist(5);
	otherlist = list;
	cout << otherlist << endl;
	return 0;
}
