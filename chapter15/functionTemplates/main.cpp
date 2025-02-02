#include <iostream>
using namespace std;

template <class Type>
Type larger(Type x, Type y)
{
	if (x >= y) return x;
	return y;
}

int main()
{
	cout << "Larger in 4 and 5 is " << larger(5,4) << endl;
	cout << "Larger in A and B is " << larger('A','B') << endl;
	return 0;
}
