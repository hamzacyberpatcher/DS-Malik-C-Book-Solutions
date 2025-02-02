#include <iostream>
#include <cmath>
#include "complexType.h"

complexType::complexType()
{
	a = b = 0.0;
}

complexType::complexType(double r, double i)
{
	a = r;
	b = i;
}

void complexType::setReal(const double & r)
{
	a = r;
}

void complexType::setImg(const double & i)
{
	b = i;
}

double complexType::getReal() const
{
	return a;
}

double complexType::getImg() const
{
	return b;
}

double complexType::mod() const
{
	return sqrt(a*a + b*b);
}

complexType complexType::operator+(const complexType& compType) const
{
	complexType tempComp;
	tempComp.a = a + compType.a;
	tempComp.b = b + compType.b;
	return tempComp;
}

complexType complexType::operator-(const complexType & compType) const
{
	complexType tempComp;
	tempComp.a = a - compType.a;
	tempComp.b = b - compType.b;
	return tempComp;
}

complexType complexType::operator*(const complexType & compType) const
{
	complexType tempComp;
	tempComp.a = a*compType.a - b*compType.b;
	tempComp.b = a*compType.b + b*compType.a;
	return tempComp;
}

complexType complexType::operator!() const
{
	complexType tempComp;
	tempComp.a = a;
	tempComp.b = -b;
	return tempComp;
}

complexType operator/(const complexType & compA, const complexType & compB)
{
	complexType tempComp;
	tempComp = compA * !compB;
	tempComp.setReal(tempComp.getReal() / (compB.mod() * compB.mod()));
	tempComp.setImg(tempComp.getImg() / (compB.mod() * compB.mod()));
	return tempComp;
}

bool complexType::operator==(const complexType & compType) const
{
	return ((a == compType.a) && (b == compType.b));
}

bool complexType::operator!=(const complexType & compType) const
{
	return !((a == compType.a) && (b == compType.b));
}

ostream& operator<<(ostream& ostreamObj, const complexType& compType)
{
	ostreamObj << compType.getReal() << " + " << compType.getImg() << "i" << endl;
	return ostreamObj;
}

istream& operator>>(istream& istreamObj, complexType& compType)
{
	istreamObj >> compType.a >> compType.b;
	return istreamObj;
}
