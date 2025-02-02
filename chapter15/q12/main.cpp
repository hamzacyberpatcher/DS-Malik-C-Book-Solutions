#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

template <class elemType>
class Matrix
{
	friend ostream& operator<<(ostream& os, const Matrix<elemType>& m)
	{
		for(int i = 0; i < m.rows; i++)
		{
			for(int j = 0; j < m.cols; j++)
			{
				os << setw(4) << left << m[i][j];
			}
			os << endl;
		}
		return os;
	}
	friend Matrix<elemType> operator+(const Matrix<elemType>& a, const Matrix<elemType>& b)
	{
		assert(a.rows == b.rows && a.cols == b.cols);
		Matrix<elemType> temp(a.rows, a.cols);
		for(int i = 0; i < a.rows; i++)
		{
			for(int j = 0; j < a.cols; j++)
			{
				temp[i][j] = a[i][j] + b[i][j];
			}
		}
		return temp;
	}
	friend Matrix<elemType> operator-(const Matrix<elemType>& a, const Matrix<elemType>& b)
	{
		assert(a.rows == b.rows && a.cols == b.cols);
		Matrix<elemType> temp(a.rows, a.cols);
		for(int i = 0; i < a.rows; i++)
		{
			for(int j = 0; j < a.cols; j++)
			{
				temp[i][j] = a[i][j] - b[i][j];
			}
		}
		return temp;
	}
	friend Matrix<elemType> operator*(const Matrix<elemType>& a, const Matrix<elemType>& b)
	{
		assert(a.cols == b.rows);
		Matrix<elemType> temp(a.rows, b.cols);
		for(int i = 0; i < a.rows; i++)
		{
			for(int j = 0; j < b.cols; j++)
			{
				temp[i][j] = 0;
				for(int k = 0; k < a.cols; k++)
				{
					temp[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		return temp;
	}
	elemType ** mat;
	int rows;
	int cols;
public:
	Matrix();
	Matrix(int, int);
	~Matrix();
	elemType * operator[](int i);
	const elemType * operator[](int i) const;
};

template <class elemType>
Matrix<elemType>::Matrix()
{
	rows = 1;
	cols = 1;
	mat = new elemType*[rows];
	for(int i = 0; i < rows; i++) mat[i] = new elemType[cols];
}

template <class elemType>
Matrix<elemType>::Matrix(int r, int c)
{
	rows = r;
	cols = c;
	mat = new elemType*[rows];
	for(int i = 0; i < rows; i++) mat[i] = new elemType[cols];
}

template <class elemType>
Matrix<elemType>::~Matrix()
{
	for(int i = 0; i < rows; i++) delete [] mat[i];
	delete [] mat;
}

template <class elemType>
elemType * Matrix<elemType>::operator[](int i)
{
	return mat[i];
}

template <class elemType>
const elemType * Matrix<elemType>::operator[](int i) const
{
	return mat[i];
}


int main()
{
	Matrix<int> a(1,2), b(2,1);
	a[0][0] = 1;
	a[0][1] = 1;
	b[0][0] = 1;
	b[1][0] = 1;
	cout << a * b;
	return 0;
}
