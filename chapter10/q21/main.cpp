#include <iostream>
#include <vector>
using namespace std;

void randVec(vector<int>& vec)
{
	srand(time(NULL));
	for(int i = 0; i < 5; i++)
	{
		vec.push_back((rand() % 40) + 1);
	}
	return;
}

void printVec(vector<int> vec)
{
	for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
	return;
}

void playerInput(vector<int>& vec)
{
	int num;
	for(int i = 0; i < 5; i++)
	{
		cout << "Enter guess no " << i + 1 << " :";
		cin >> num;
		vec.push_back(num);
	}
	return;
}

void sortVec(vector<int>& vec)
{
	int smallest;
	for(int i = 0; i < vec.size(); i++)
	{
		smallest = i;
		for(int j = i + 1; j < vec.size(); j++)
		{
			if (vec[j] < vec[smallest])
				smallest = j;
		}
		swap(vec[i], vec[smallest]);
	}
	return;
}

bool vecEqual(vector<int>& vec1, vector<int>& vec2)
{
	if (vec1.size() != vec2.size()) return false;

	for(int i = 0; i < vec1.size(); i++)
	{
		if (vec1[i] != vec2[i]) return false;
	}
	return true;
}

int main()
{
	vector<int> randomList, player;
	randVec(randomList);
	sortVec(randomList);
	cout << "Enter your guesses: " << endl;
	playerInput(player);
	sortVec(player);
	if (vecEqual(randomList, player)) cout << "You Won!!!";
	else cout << "You Lost!!!";
	cout << endl;
	return 0;
}
