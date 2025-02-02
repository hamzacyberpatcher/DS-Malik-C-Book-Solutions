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
	void setCenter(const int&, const int&);
	void getCenter(int&, int&) const;
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

void pointType::setCenter(const int& dx, const int& dy)
{
	x = dx;
	y = dy;
	return;
}

void pointType::getCenter(int& dx, int& dy) const
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

class cylinderType : public circleType
{
	int height;
public:
	cylinderType();
	cylinderType(int, int, int, int);
	void setHeight(const int&);
	void getHeight(int&) const;
	double getVol() const;
	double getSurfaceArea() const;

};

cylinderType::cylinderType() : circleType::circleType()
{
	height = 0;
}

cylinderType::cylinderType(int dx, int dy, int r, int h) : circleType::circleType(dx, dy, r)
{
	height = h;
}

double cylinderType::getVol() const
{
	int r;
	circleType::getRadius(r);
	return PI * r * r * height;
}

double cylinderType::getSurfaceArea() const
{
	int r;
	circleType::getRadius(r);
	return 2 * PI * r * height + circleType::getArea();
}

int main()
{
	cylinderType cylinder(2,3,5,5);
	cout << cylinder.getVol() << endl << cylinder.getSurfaceArea() << endl;
	return 0;
}
