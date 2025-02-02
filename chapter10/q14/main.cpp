#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVec(const vector<string> vec)
{
	for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
	cout << endl;
	return;
}

void insSort(vector<string>& vec)
{
	int location;
	string temp;
	for(int firstOutOfOrder = 1; firstOutOfOrder < vec.size(); firstOutOfOrder++)
	{
		if (vec[firstOutOfOrder] < vec[firstOutOfOrder - 1])
		{
			location = firstOutOfOrder;
			temp = vec[firstOutOfOrder];
			do
			{
				vec[location] = vec[location - 1];
				location--;
			} while(location > 0 && vec[location - 1] > temp);
			vec[location] = temp;
		}
	}
}

int main()
{
	vector<string> vec(3);
	vec.at(0) = "C";
	vec.at(1) = "B";
	vec.at(2) = "A";

	printVec(vec);
	insSort(vec);
	printVec(vec);

	return 0;
}
