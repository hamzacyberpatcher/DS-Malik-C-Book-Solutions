#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVec(const vector<string> vec)
{
	for(int i = 0; i < vec.size(); i++) cout << vec.at(i) << " ";
	cout << endl;
	return;
}

void selSort(vector<string>& vec)
{
	int smallest;
	for(int i = 0; i < vec.size() - 1; i++)
	{
		smallest = i;
		for(int j = i + 1; j < vec.size(); j++)
			if (vec.at(j) < vec.at(smallest))
				smallest = j;
		swap(vec[i], vec[smallest]);
	}
	return;
}

int binSearch(const vector<string> vec, const string item)
{
	int low = 0;
	int high = vec.size() -  1;
	int mid;
	bool found = false;

	while(low <= high && !found)
	{
		mid = (low + high) / 2;
		if (vec.at(mid) == item) found = true;
		else if (vec.at(mid) < item) low = mid + 1;
		else high = mid - 1;
	}

	if (found) return mid;
	return -1;
}

int main()
{
	vector<string> vec(3);
	vec.at(0) = ("Hello");
	vec.at(1) = ("meow");
	vec.at(2) = ("dalla");
	printVec(vec);
	selSort(vec);
	printVec(vec);
	cout << binSearch(vec, "dalla") << endl;
	return 0;
}
