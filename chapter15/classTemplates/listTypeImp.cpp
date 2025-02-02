#include <iostream>
#include <cassert>
#include "listType.h"
using namespace std;

template <class elemType>
listType<elemType>::listType()
{
	maxSize = 50;
	size = 0;
	list = new elemType[size];
}

template <class elemType>
listType<elemType>::listType(int s)
{
	maxSize = s;
	size = 0;
	list = new elemType[size];
}

template <class elemType>
listType<elemType>::~listType()
{
	delete [] list;
}

template <class elemType>
bool listType<elemType>::isEmpty() const
{
	return (size == 0);
}

template <class elemType>
bool listType<elemType>::isFull() const
{
	return (size >= maxSize);
}

template <class elemType>
int listType<elemType>::getSize() const
{
	return size;
}

template <class elemType>
int listType<elemType>::getMaxSize() const
{
	return maxSize;
}

template <class elemType>
void listType<elemType>::insertAt(const elemType& item, const int position)
{
	assert(position >= 0 && position < maxSize);
	list[position] = item;
	size++;
}

template <class elemType>
void listType<elemType>::sort()
{
	int min;
	for(int i = 0; i < size; i++)
	{
		min = i;
		for(int j = i + 1; j < size; j++) if (list[j] < list[min]) min = j;
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
		size = otherList.size;
		for(int i = 0; i < size; i++) list[i] = otherList[i];
	}
	return *this;
}

