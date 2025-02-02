#include <iostream>
#include <string>
using namespace std;

const int CANDIDATES = 5;

void getData(string names[], int votes[], int& totalVotes)
{
	totalVotes = 0;
	for(int i = 0; i < CANDIDATES; i++)
	{
		cout << "Enter the last name of the candidate number " << i + 1 << ": ";
		cin >> names[i];
		cout << "Amount of votes: ";
		cin >> votes[i];
		totalVotes  += votes[i];
	}
	return;
}

int winnerIndex(int votes[])
{
	int largest = 0;
	for(int i = 0; i < CANDIDATES; i++)
	{
		if(votes[i] > votes[largest])
			largest = i;
	}
	return largest;
}

int main()
{
	string names[CANDIDATES];
	int votes[CANDIDATES];
	int totalVotes = 0;
	
	getData(names, votes, totalVotes);
	
	int winner = winnerIndex(votes);

	cout << winner << endl;

	return 0;
}
