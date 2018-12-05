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

const Matrix2D Matrix2D::identityMatrix()
{
	Matrix2D matrix;
	matrix.arr[0] = 1;
	matrix.arr[1] = 0;
	matrix.arr[2] = 0;
	matrix.arr[3] = 1;
	return matrix;
}
