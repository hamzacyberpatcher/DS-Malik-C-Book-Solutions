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

void selSort(vector<string>& vec)
{
	int smallest;
	for(int i = 0; i < vec.size(); i++)
	{
		smallest = i;
		for(int j = i + 1; j < vec.size(); j++)
			if (vec[j] < vec[smallest])
				smallest = j;
		swap(vec[i], vec[smallest]);
	}
}

int main()
{
	vector<string> vec(3);
	vec[0] = "A";
	vec[1] = "D";
	vec[2] = "B";

	printVec(vec);
	selSort(vec);
	printVec(vec);

	return 0;
}
