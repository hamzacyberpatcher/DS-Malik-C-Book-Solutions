#include <iostream>
using namespace std;

class rectangleType
{
	friend ostream& operator<<(ostream&, const rectangleType);
	friend istream& operator>>(istream&, rectangleType);
	int length;
	int width;
public:
	rectangleType();
	rectangleType(int, int);
	int area() const;
	int perimeter() const;
	void setLength(const int&);
	void setWidth(const int&);
	int getLength() const;
	int getWidth() const;
	rectangleType operator+(const rectangleType&) const;
	rectangleType operator-(const rectangleType&) const;
	rectangleType operator*(const rectangleType&) const;
	bool operator==(const rectangleType&) const;
	bool operator!=(const rectangleType&) const;
};

rectangleType::rectangleType()
{
	length = width = 0;
}

rectangleType::rectangleType(int l, int w)
{
	l < 0 ? length = 0 : length = l;
	w < 0 ? width = 0 : width = w;
}

int rectangleType::area() const
{
	return length * width;
}

int rectangleType::perimeter() const
{
	return 2 * (length + width);
}

void rectangleType::setLength(const int& l)
{
	l < 0 ? length = 0 : length = l;
}

void rectangleType::setWidth(const int& w)
{
	w < 0 ? width = 0 : width = w;
}

int rectangleType::getLength() const
{
	return length;
}

int rectangleType::getWidth() const
{
	return width;
}

rectangleType rectangleType::operator+(const rectangleType& rect) const
{
	rectangleType temprect;
	temprect.length = length + rect.getLength();
	temprect.width = width + rect.getWidth();
	return temprect;
}

rectangleType rectangleType::operator-(const rectangleType& rect) const
{
	rectangleType temprect;
	temprect.length = length - rect.getLength();
	temprect.width = width - rect.getWidth();
	return temprect;
}

rectangleType rectangleType::operator*(const rectangleType& rect) const
{
	rectangleType temprect;
	temprect.length = length * rect.getLength();
	temprect.width = width * rect.getWidth();
	return temprect;
}

bool rectangleType::operator==(const rectangleType& rect) const
{
	return ((length == rect.getLength()) && (width == rect.getWidth()));
}

bool rectangleType::operator!=(const rectangleType& rect) const
{
	return !((length == rect.getLength()) && (width == rect.getWidth()));
}

ostream& operator<<(ostream& ostreamObj, const rectangleType rect)
{
	ostreamObj << "Length: " << rect.length << " " << "Width: " << rect.width << endl;
	return ostreamObj;
}

istream& operator>>(istream& istreamObj, rectangleType rect)
{
	istreamObj >> rect.length >> rect.width;
	return istreamObj;
}

int main()
{
	rectangleType rect1(1,1), rect2(1,1);
	cout << rect1 + rect2 << endl;
	return 0;
}
