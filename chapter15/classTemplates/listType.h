#ifndef H_listType
#define H_listType

#include <iostream>
#include <cassert>
using namespace std;

template <class elemType>
class listType
{
	int maxSize;
	elemType * list;
public:
	listType();
	listType(int);
	~listType();
	int getMaxSize() const;
	void sort();
	elemType& operator[](int);
	const elemType& operator[](int) const;
	const listType<elemType>& operator=(const listType<elemType>&);
	elemType* getList() const { return list; };
};


template <class elemType>
listType<elemType>::listType()
{
	maxSize = 50;
	list = new elemType[maxSize];
}

template <class elemType>
listType<elemType>::listType(int s)
{
	maxSize = s;
	list = new elemType[maxSize];
}

template <class elemType>
listType<elemType>::~listType()
{
	delete [] list;
}

template <class elemType>
int listType<elemType>::getMaxSize() const
{
	return maxSize;
}


template <class elemType>
void listType<elemType>::sort()
{
	int min;
	for(int i = 0; i < maxSize; i++)
	{
		min = i;
		for(int j = i + 1; j < maxSize; j++) if (list[j] < list[min]) min = j;
		swap(list[i], list[min]);
	}
}

template <class elemType>
elemType& listType<elemType>::operator[](int pos)
{
	assert(pos >= 0 && pos <= maxSize);
	return list[pos];
}

template <class elemType>
const elemType& listType<elemType>::operator[](int pos) const
{
	assert(pos >= 0 && pos <= maxSize);
	return list[pos];
}

template <class elemType>
const listType<elemType>& listType<elemType>::operator=(const listType<elemType>& otherList)
{
	if (this != &otherList)
	{
		delete [] list;
		maxSize = otherList.maxSize;
		list = new elemType[maxSize];
		for(int i = 0; i < maxSize; i++) list[i] = otherList[i];
	}
	return *this;
}

template <class elemType>
ostream& operator<<(ostream& os, const listType<elemType>& l)
{
	for(int i = 0; i < l.getMaxSize(); i++) os << l[i] << " ";
	return os;
}

#endif
