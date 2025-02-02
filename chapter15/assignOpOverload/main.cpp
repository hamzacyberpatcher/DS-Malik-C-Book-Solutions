#include <iostream>
using namespace std;

class arrType
{
	friend ostream& operator<<(ostream&, const arrType&);
	int size;
	int max = 10;
	int * arr;
public:
	arrType();
	arrType(int);
	~arrType();
	const arrType& operator=(const arrType&);
};

arrType::arrType()
{
	arr = new int[max];
	for(int i = 0; i < max; i++) arr[i] = i;
}

arrType::arrType(int s)
{
	(s > max || s < 0) ? size = 0 : size = s;
	arr = new int[size];
	for(int i = 0; i < size; i++) arr[i] = i;
}
arrType::~arrType()
{
	delete [] arr;
}

ostream& operator<<(ostream& ostreamObj, const arrType& array)
{
	for(int i = 0; i < array.size; i++) ostreamObj << array.arr[i] << " ";
	ostreamObj << endl;
	return ostreamObj;
}

const arrType& arrType::operator=(const arrType& otherList)
{
	if (this != &otherList)
	{
		delete [] arr;
		size = otherList.size;
		arr = new int[size];
		for(int i = 0; i < size; i++) arr[i] = otherList.arr[i];
	}
	return *this;
}

int main()
{
	arrType array1(5), array2(6);
	cout << array1;
	cout << array2;
	array2 = array1;
	cout << array1;
	return 0;
}
