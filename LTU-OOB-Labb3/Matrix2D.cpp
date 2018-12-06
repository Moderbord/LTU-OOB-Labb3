#include "pch.h"
#include "Matrix2D.h"


Matrix2D::Matrix2D()
{
	this->arr[0] = 0;
	this->arr[1] = 0;
	this->arr[2] = 0;
	this->arr[3] = 0;
}

Matrix2D::Matrix2D(float a, float b, float c, float d)
{
	this->arr[0] = a;
	this->arr[1] = b;
	this->arr[2] = c;
	this->arr[3] = d;
}

Matrix2D::Matrix2D(const Matrix2D &matrix)
{
	this->arr[0] = matrix.arr[0];
	this->arr[1] = matrix.arr[1];
	this->arr[2] = matrix.arr[2];
	this->arr[3] = matrix.arr[3];
}

const Matrix2D Matrix2D::operator*(const Matrix2D &matrix)
{
	Matrix2D mat;
	mat.arr[0] = this->arr[0] * matrix.arr[0] + this->arr[1] * matrix.arr[2];
	mat.arr[1] = this->arr[0] * matrix.arr[1] + this->arr[1] * matrix.arr[3];
	mat.arr[2] = this->arr[2] * matrix.arr[0] + this->arr[3] * matrix.arr[2];
	mat.arr[3] = this->arr[2] * matrix.arr[1] + this->arr[3] * matrix.arr[3];
	return mat;
}

void Matrix2D::operator=(const Matrix2D &matrix)
{
	this->arr[0] = matrix.arr[0];
	this->arr[1] = matrix.arr[1];
	this->arr[2] = matrix.arr[2];
	this->arr[3] = matrix.arr[3];
}

const Vector2D Matrix2D::operator*(Vector2D &vector)
{
	Vector2D vec;
	vec.setX(this->arr[0] * vector.arr[0] + this->arr[1] * vector.arr[0]);
	vec.setY(this->arr[2] * vector.arr[1] + this->arr[3] * vector.arr[1]);
	return vec;
}

const float Matrix2D::getA()
{
	return this->arr[0];
}

const float Matrix2D::getB()
{
	return this->arr[1];
}

const float Matrix2D::getC()
{
	return this->arr[2];
}

const float Matrix2D::getD()
{
	return this->arr[3];
}

float *Matrix2D::getPointer()
{
	return this->arr;
}

void Matrix2D::setA(float a)
{
	this->arr[0] = a;
}

void Matrix2D::setB(float b)
{
	this->arr[1] = b;
}

void Matrix2D::setC(float c)
{
	this->arr[2] = c;
}

void Matrix2D::setD(float d)
{
	this->arr[3] = d;
}

void Matrix2D::setAll(float x)
{
	for (int i = 0; i < 4; i++)
	{
		this->arr[i] = x;
	}
}

const Matrix2D Matrix2D::transpose()
{
	Matrix2D matrix;
	matrix.arr[0] = this->arr[0];
	matrix.arr[1] = this->arr[2];
	matrix.arr[2] = this->arr[1];
	matrix.arr[3] = this->arr[3];
	return matrix;
}

const Matrix2D Matrix2D::rotationMatrix(float a, float b, float c, float d)
{
	Matrix2D matrix;
	matrix.arr[0] = cos(a * M_PI / 180.0);
	matrix.arr[1] = -sin(b * M_PI / 180.0);
	matrix.arr[2] = sin(c * M_PI / 180.0);
	matrix.arr[3] = cos(d * M_PI / 180.0);
	return matrix;
}

const Matrix2D Matrix2D::identityMatrix()
{
	Matrix2D matrix;
	matrix.arr[0] = 1;
	matrix.arr[1] = 0;
	matrix.arr[2] = 0;
	matrix.arr[3] = 1;
	return matrix;
}

const void Matrix2D::print()
{
	for (int i = 0; i < 4; i++)
	{
		cout << this->arr[i] << endl;
	}
}

const void Matrix2D::printA()
{
	cout << this->arr[0] << endl;
}

const void Matrix2D::printB()
{
	cout << this->arr[1] << endl;
}

const void Matrix2D::printC()
{
	cout << this->arr[2] << endl;
}

const void Matrix2D::printD()
{
	cout << this->arr[3] << endl;
}
