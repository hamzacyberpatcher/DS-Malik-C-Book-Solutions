#include <iostream>
#include <string>
using namespace std;

class romanType
{
	string romanNumberText;
public:
	romanType() {};
	romanType(string);
	void setRomanNumber(string);
	void convertNumber(int&);
};

void romanType::setRomanNumber(string num)
{
	romanNumberText = num;
	return;
}

romanType::romanType(string num)
{
	romanNumberText = num;
	return;
}

void romanType::convertNumber(int& num)
{
	num = 0;
	for(int i = 0; i < romanNumberText.size(); i++)
	{
		switch(romanNumberText.at(i))
		{
			case 'M':
				num += 1000; break;
			case 'D':
				num += 500; break;
			case 'C':
				num += 100; break;
			case 'L':
				num += 50; break;
			case 'X':
				num += 10; break;
			case 'V':
				num += 5; break;
			case 'I':
				num++; break;
		}
	}
	return;
}

int main()
{
	romanType roman("CCCLIX");
	int num;
	roman.convertNumber(num);
	cout << num << endl;
	return 0;
}
