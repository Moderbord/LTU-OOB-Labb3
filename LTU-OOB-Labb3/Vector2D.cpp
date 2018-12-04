#include "pch.h"
#include "Vector2D.h"
#include <iostream>
#include <cmath>

namespace {
	using std::cout;
	using std::endl;
}

Vector2D::Vector2D()
{
	this->arr[0] = 0;
	this->arr[1] = 0;
}

Vector2D::Vector2D(float x, float y)
{
	this->arr[0] = x;
	this->arr[1] = y;
}

Vector2D::Vector2D(const Vector2D &vector)
{
	this->arr[0] = vector.arr[0];
	this->arr[1] = vector.arr[1];
}

Vector2D Vector2D::operator+(const Vector2D &vector)
{
	Vector2D vec;
	vec.arr[0] = this->arr[0] + vector.arr[0];
	vec.arr[1] = this->arr[1] + vector.arr[1];
	return vec;
}

Vector2D Vector2D::operator-(const Vector2D &vector)
{
	Vector2D vec;
	vec.arr[0] = this->arr[0] - vector.arr[0];
	vec.arr[1] = this->arr[1] - vector.arr[1];
	return vec;
}

Vector2D Vector2D::operator*(const Vector2D &vector)
{
	Vector2D vec;
	vec.arr[0] = this->arr[0] * vector.arr[0];
	vec.arr[1] = this->arr[1] * vector.arr[1];
	return vec;
}

void Vector2D::operator=(const Vector2D &vector)
{
	this->arr[0] = vector.arr[0];
	this->arr[1] = vector.arr[1];
}

bool Vector2D::operator==(const Vector2D &vector)
{
	return (this->arr[0] == vector.arr[0] && this->arr[1] == vector.arr[1]) ? true : false;	// If both vector values are equivalent return true
}

bool Vector2D::operator!=(const Vector2D &vector)
{
	return (this->arr[0] != vector.arr[0] || this->arr[1] != vector.arr[1]) ? true : false;	// If any vector value isn't equivalent return true
}

const float Vector2D::getX()
{ 
	return arr[0]; 
}

const float Vector2D::getY()
{ 
	return arr[1];
}

void Vector2D::setX(float x)
{ 
	arr[0] = x;
}

void Vector2D::setY(float y)
{ 
	arr[1] = y;
}

Vector2D Vector2D::computeVectorNormal()
{
	Vector2D vector;
	float normal = this->computeVectorLength();

	vector.arr[0] = this->arr[0] / normal;
	vector.arr[1] = this->arr[1] / normal;

	return vector;
}

float Vector2D::computeVectorLength()
{
	return sqrt(pow(this->arr[0], 2) + pow(this->arr[1], 2));		// sqrt(a^2 + b^2)
}

float Vector2D::computeDotProduct(const Vector2D & vector)
{
	return this->arr[0] * vector.arr[0] + this->arr[1] * vector.arr[1];		// a * x + b * y
}

const void Vector2D::printX()
{
	cout << "x: " << this->arr[0] << endl;
}

const void Vector2D::printY()
{
	cout << "y: " << this->arr[1] << endl;
}

const void Vector2D::printXY()
{
	cout << "x: " << this->arr[0] << ", y: " << this->arr[1] << endl;
}
