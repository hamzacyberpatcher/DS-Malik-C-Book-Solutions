#include <iostream>
using namespace std;

enum TriangleType {scalene, isoceles, equilateral, noTriangle};

bool isTriangle(int a, int b, int c)
{
	if (a + b > c) return true;
	return false;
}

TriangleType triangleClass(int a, int b, int c)
{
	if (a == b && a == c)
	{
		return equilateral;
	}
	if (a == b && a != c)
	{
		return isoceles;
	}
	if (a == c && a != b)
	{
		return isoceles;
	}
	if (b == a && b != c)
	{
		return isoceles;
	}
	if (b == c && b != a)
	{
		return isoceles;
	}
	else
	{
		return scalene;
	}

}

void printType(TriangleType triangle)
{
	if (triangle == noTriangle)
	{
		cout << "It is not a triangle";
	}
	else if (triangle == scalene)
	{
		cout << "It is a sclene triangle";
	}
	else if (triangle == isoceles)
	{
		cout << "It is an isoceles triangle";
	}
	else
	{
		cout << "It is an equilateral triangle";
	}
	cout << endl;
	return;
}

int main()
{
	int a, b, c;
	TriangleType triangle;
	cout << "Enter the length of the sides of the triangle: ";
	cin >> a >> b >> c;
	if (isTriangle(a, b, c))
	{
		triangle = triangleClass(a, b, c);
	}
	else
	{
		triangle = noTriangle;
	}
	printType(triangle);
	return 0;
}
