#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printVec(const vector<string> vec)
{
	for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
	return;
}

void bubbleSort(vector<string>& vec)
{
	for(int i = 1; i < vec.size(); i++)
	{
		for(int j = 0; j < vec.size() - i; j++)
		{
			if (vec[j] > vec[j+1])
				swap(vec[j], vec[j+1]);
		}
	}
	return;
}

int main()
{
	vector<string> vec(3);
	vec[0] = "Hello";
	vec[1] = "mewo";
	vec[2] = "mahesh";

	printVec(vec);
	bubbleSort(vec);
	printVec(vec);

	return 0;
}
