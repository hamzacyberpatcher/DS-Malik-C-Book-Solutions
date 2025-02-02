#include <iostream>
using namespace std;

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

int main()
{
	pointType point(3,4);
	point.print();
	return 0;
}
