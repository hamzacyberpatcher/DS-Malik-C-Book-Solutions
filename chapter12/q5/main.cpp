#include <iostream>
#include <string>
using namespace std;

class personType
{
public:
	void print() const;
	void setName(string first, string last);
	string getFirstName() const;
	string getLastName() const;
	void setFirstName(string);
	void setLastName(string);
	void setMiddleName(string);
	bool checkFirstName(string);
	bool checkLastName(string);
	personType(string first = "", string last = "", string middle = "");
private:
	string firstName;
	string lastName;
	string middleName;
};

void personType::print() const
{
	cout << firstName << " " << lastName << " " << middleName << endl;
	return;
}

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
	return;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

void personType::setFirstName(string first)
{
	firstName = first;
	return;
}

void personType::setLastName(string last)
{
	lastName = last;
	return;
}

void personType::setMiddleName(string middle)
{
	middleName = middle;
	return;
}

bool personType::checkFirstName(string first)
{
	return (first == firstName);
}

bool personType::checkLastName(string last)
{
	return (last == lastName);
}

personType::personType(string first, string last, string middle)
{
	firstName = first;
	lastName = last;
	middleName = middle;
	return;
}

int main()
{

}
