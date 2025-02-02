#include <iostream>
using namespace std;

const double PI = 3.141592653;

class pointType
{
	int x;
	int y;
public:
	pointType();
	pointType(int, int);
	void setPoint(const int&, const int&);
	void getPoint(int&, int&) const;
	void print() const;
	int getX() const;
	int getY() const;
};

pointType::pointType()
{
	x = y = 0;
}

pointType::pointType(int dx, int dy)
{
	x = dx;
	y = dy;
}

void pointType::setPoint(const int& dx, const int& dy)
{
	x = dx;
	y = dy;
	return;
}

void pointType::getPoint(int& dx, int& dy) const
{
	dx = x;
	dy = y;
	return;
}

void pointType::print() const
{
	cout << "(" << x << ", " << y << ")" << endl;
	return;
}

int pointType::getX() const
{
	return x;
}

int pointType::getY() const
{
	return y;
}

class circleType : public pointType
{
	int radius;
public:
	circleType();
	circleType(int, int, int);
	void setRadius(const int&);
	void getRadius(int&) const;
	double getArea() const;
	double getPeri() const;
};

circleType::circleType() : pointType::pointType()
{
	radius = 0;
}

circleType::circleType(int dx, int dy, int r) : pointType::pointType(dx, dy)
{
	radius =  r;
	return;
}

void circleType::setRadius(const int & r)
{
	radius =  r;
	return;
}

void circleType::getRadius(int & r) const
{
	r = radius;
	return;
}

double circleType::getArea() const
{
	return PI * radius * radius;
}

double circleType::getPeri() const
{
	return 2 * PI * radius;
}

int main()
{
	circleType circle(3, 4, 5);
	cout << circle.getArea() << endl << circle.getPeri() << endl;
	return 0;
}
