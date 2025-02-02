#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int QUESTIONS = 20;

int main()
{
	string id;
	string key;
	char attempt[QUESTIONS];

	ifstream answer;
	answer.open("answer.dat");
	answer >> key;
	answer.close();

	ifstream student;
	student.open("student.dat");
	student >> id;
	student.get();
	student.get(attempt, QUESTIONS);
	student.close();

	int score = 0;

	for(int i = 0; i < QUESTIONS; i++)
	{
		if (attempt[i] == ' ')
		{
			continue; 
		}
		else if (attempt[i] == key.at(i))
		{
			score += 2;
		}
		else if (attempt[i] != key.at(i))
		{
			score--;
		}
	}

	double percentage = (score / 40.0) * 100.0;
	char grade;

	if (percentage >= 90 && percentage <= 100) grade = 'A';
	else if (percentage >= 80 && percentage <= 89.99) grade = 'B';
	else if (percentage >= 70 && percentage <= 79.99) grade = 'C';
	else if (percentage >= 60 && percentage <= 69.99) grade = 'D';
	else if (percentage >= 0 && percentage <= 59.99) grade = 'F';

	cout << "Student ID: " << id << endl;
	cout << "Answer: " << attempt << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;

	return 0;
}
