#include <iostream>
using namespace std;

int main()
{
	int **board;
	int rows = 4;
	int cols = 4;

	board = new int*[rows];
	
	for(int i = 0; i < rows; i++) board[i] = new int[cols];

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			board[i][j] = i*4 + j;

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			cout << board[i][j] << " ";
		cout << endl;
	}

	return 0;
}
