#include <iostream>
#include <vector>
using namespace std;

class Student
{
	int a, b, c, d, e, avg;
	char grade;
	public:
		Student(int a, int b, int c, int d, int e)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->e = e;
			avg = (a + b + c + d + e) / 5;
			if (avg >= 90)
			{
				grade = 'A';
			}
			else if (avg < 90 && avg >= 80)
			{
				grade = 'B';
			}
			else if (avg < 80 && avg >= 70)
			{
				grade = 'C';
			}
			else if (avg < 70 && avg >= 60)
			{
				grade = 'D';
			}
			else
			{
				grade = 'F';
			}
			return;
		}
		char getGrade(void)
		{
			return grade;
		}
		int getAvg(void)
		{
			return avg;
		}
};

int main()
{
	vector<Student> classRoom;

	Student hamza(71,87,94,34,98);
	Student hamaad(67,98,34,85,23);
	Student ali(69,23,65,78,23);
	Student taha(45,76,23,54,76);
	Student muneeb(76,45,34,76,23);

	classRoom.push_back(hamza);
	classRoom.push_back(hamaad);
	classRoom.push_back(ali);
	classRoom.push_back(taha);
	classRoom.push_back((muneeb));

	for(int i = 0; i < classRoom.size(); i++)
	{
		cout << "the grade of the student no " << i+1 << " is " << classRoom[i].getGrade() << endl;
		cout << "the average score of the student no " << i+1 << " is " << classRoom[i].getAvg() << endl;
	}

	int totalScore = 0;

	for(int i = 0; i < classRoom.size(); i++)
	{
		totalScore += classRoom[i].getAvg();
	}

	int classAvg = totalScore / 5;

	cout << "the class avg is " << classAvg << endl;

	return 0;
}
