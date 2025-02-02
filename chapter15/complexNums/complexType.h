#ifndef H_complexType
#define H_complexType

#include <iostream>
using namespace std;

class complexType
{
	friend ostream& operator<<(ostream&, const complexType&);
	friend istream& operator>>(istream&, complexType&);
	double a;
	double b;
public:
	complexType();
	complexType(double, double);
	void setReal(const double&);
	void setImg(const double&);
	double getReal() const;
	double getImg() const;
	double mod() const;
	complexType operator+(const complexType&) const;
	complexType operator-(const complexType&) const;
	complexType operator*(const complexType&) const;
	friend complexType operator/(const complexType&, const complexType&);
	bool operator==(const complexType&) const;
	bool operator!=(const complexType&) const;
	complexType operator!() const;
};

#endif
