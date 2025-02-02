#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void printVec(const vector<int> vec)
{
	for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
	return;
}

bool alreadyExists(const vector<int> vec, const int element)
{
	for(int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == element)
			return true;
	}
	return false;
}

void sortVec(vector<int>& vec)
{
	int smallest;
	for (int i = 0; i < vec.size(); i++)
	{
		smallest = i;
		for(int j = i + 1; j < vec.size(); j++)
		{
			if (vec[j] < vec[smallest])
			{
				smallest = j;
			}
		}
		swap(vec[i], vec[smallest]);
	}
	return;
}

int totalOccurences(const vector<int> vec, const int element)
{
	int occurences = 0;
	for(int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == element) occurences++;
	}
	return occurences;
}

int main()
{
	int num;
	vector<int> nums;
	vector<int> occ;
	vector<int> og;
	ifstream inFile;
	inFile.open("num.dat");
	inFile >> num;
	while(num != -999)
	{
		if (!alreadyExists(nums,num))
			nums.push_back(num);
		og.push_back(num);
		inFile >> num;
	}
	inFile.close();


	sortVec(nums);

	for (int i = 0; i < nums.size(); i++)
	{
		occ.push_back(totalOccurences(og, nums[i]));
	}

	cout << "Test Score     Count" << endl;

	for(int i = 0; i < nums.size(); i++)
	{
		cout << "  " << nums[i] << "             " << occ[i] << endl;
	}



	return 0;
}
