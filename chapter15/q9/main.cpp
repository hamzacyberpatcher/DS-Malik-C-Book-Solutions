#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
	friend ostream& operator<<(ostream&, const Fraction&);
	friend istream& operator>>(istream&, Fraction&);
	int num;
	int deno;
public:
	Fraction();
	Fraction(int, int);
	void setNum(const int&);
	void setDeno(const int&);
	int getNum() const;
	int getDeno() const;
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
};

Fraction::Fraction()
{
	num = 0;
	deno = 1;
}

Fraction::Fraction(int a, int b)
{
	assert(b);
	num = a;
	deno = b;
}

void Fraction::setNum(const int& a)
{
	num = a;
}

void Fraction::setDeno(const int& b)
{
	assert(b);
	deno = b;
}

int Fraction::getNum() const
{
	return num;
}

int Fraction::getDeno() const
{
	return deno;
}

Fraction Fraction::operator+(const Fraction& frac)
{
	assert(deno);
	assert(frac.deno);
	Fraction temp;
	temp.num = (num*frac.deno + deno*frac.num);
	temp.deno = deno*frac.deno;
	return temp;
}

Fraction Fraction::operator-(const Fraction& frac)
{
	assert(deno);
	assert(frac.deno);
	Fraction temp;
	temp.num = (num*frac.deno - deno*frac.num);
	temp.deno = deno*frac.deno;
	return temp;
}

Fraction Fraction::operator*(const Fraction& frac)
{
	assert(deno);
	assert(frac.deno);
	Fraction temp;
	temp.num = num*frac.num;
	temp.deno = deno*frac.deno;
	return temp;
}

Fraction Fraction::operator/(const Fraction& frac)
{
	assert(deno);
	assert(frac.num);
	Fraction temp;
	temp.num = num*frac.deno;
	temp.deno = deno*frac.num;
	return temp;
}

ostream& operator<<(ostream& os, const Fraction& frac)
{
	os << frac.num << " / " << frac.deno;
	return os;
}

istream& operator>>(istream& is, Fraction& frac)
{
	is >> frac.num >> frac.deno;
	return is;
}

int main()
{
	Fraction a(1,2), b(1,2);
	cout << a << endl;
	cout << b << endl;
	cout << a+b << endl;
	cout << a-b << endl;
	cout << a*b << endl;
	cout << a/b << endl;
	return 0;
}
