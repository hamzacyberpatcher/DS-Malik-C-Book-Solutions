#include <cstdlib>
#include <iostream>
using namespace std;

enum objectType {ROCK, PAPER, SCISSORS};

void displayRules();
bool validSelection(char selection);
objectType retrievePlay(char selection);
void convertEnum(objectType selection);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, int& gamewinner);
void displayResults(int gameCount, int winCount1, int winCount2);

int main()
{
	int gameCount;

	int winCount1;
	
	int winCount2;

	int gamewinner;
	char response;

	char selection1;
	char selection2;
	objectType play1;
	objectType play2;

	gameCount = 0;
	winCount1 = 0;
	winCount2 = 0;
	
	displayRules();

	cout << "Enter Y/y to play the game: ";
	cin >> response;

	while(response == 'y' || response == 'Y')
	{
		cout << "Player 1 enter your choice: ";
		cin >> selection1;
		cout << "Player 2 enter your choice: ";
		cin >> selection2;
		
		if (validSelection(selection1) && validSelection(selection2))
		{
			play1 = retrievePlay(selection1);
			play2 = retrievePlay(selection2);
			gameCount++;
			gameResult(play1, play2, gamewinner);
			if (gamewinner == 1) winCount1 ++;
			else winCount2++;
		}
		cout << "Enter y/Y to play the game: ";
		cin >> response;
	}
	displayResults(gameCount,winCount1,winCount2);
	return 0;
}

void displayRules()
{
	cout << "It is a game of Rock, Paper, Scissors" << endl;
	cout << "If u donot know the rules than reconsider ur life and google them" << endl;
	cout << "I'm way too lazy to type them" << endl;
	return;
}

bool validSelection(char selection)
{
	switch(selection)
	{
		case 'r':
		case 'R':
		case 'P':
		case 'p':
		case 's':
		case 'S':
			return true;
		default:
			return false;
	}
}

objectType retrievePlay(char selection)
{
	objectType object;
	switch(selection)
	{
		case 'r':
		case 'R':
			object = ROCK; break;
		case 'p':
		case 'P':
			object = PAPER; break;
		case 's':
		case 'S':
			object = SCISSORS; break;
	}
	return object;
}

void convertEnum(objectType selection)
{
	switch(selection)
	{
		case ROCK:
			cout << "Rock"; break;
		case PAPER:
			cout << "Paper"; break;
		case SCISSORS:
			cout << "Scissors"; break;
	}
	return;
}

objectType winningObject(objectType play1, objectType play2)
{
	if ((play1 == ROCK && play2 == SCISSORS) || (play2 == ROCK && play1 == SCISSORS)) return ROCK;
	else if ((play1 == PAPER && play2 == ROCK) || (play1 == ROCK && play2 == PAPER)) return PAPER;
	else return SCISSORS;
}

void gameResult(objectType play1, objectType play2, int& gamewinner)
{
	objectType winnerObject;
	if (play1 == play2)
	{
		gamewinner = 0;
		cout << "Both of the players selected ";convertEnum(play1);cout << ". This game is a tie." << endl;
	}
	else
	{
		winnerObject = winningObject(play1, play2);

		if (play1 == winnerObject) gamewinner = 1;
		else gamewinner = 2;
		cout << "Player " << gamewinner << " wins this game." << endl;
	}
	return;
}

void displayResults(int gameCount, int winCount1, int winCount2)
{
	cout << endl;
	cout << "Final Game Results" << endl;
	cout << "Totoal number of games played: " << gameCount << endl;
	cout << "Games won by player 1: " << winCount1 << endl;
	cout << "Games won by player 2: " << winCount2 << endl;
	return;
}
