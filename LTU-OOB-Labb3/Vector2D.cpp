#include "pch.h"
#include "Vector2D.h"
#include <iostream>


Vector2D::Vector2D()
{
	std::cout << "Empty constructor" << std::endl;
	this->arr[0] = 0;
	this->arr[1] = 0;
}

Vector2D::Vector2D(float x, float y) {
	std::cout << "Constructor with values" << std::endl;
	this->arr[0] = x;
	this->arr[1] = y;
}

Vector2D::Vector2D(const Vector2D &vector)
{
	std::cout << "Copy constructor" << std::endl;
	this->arr[0] = vector.arr[0];
	this->arr[1] = vector.arr[1];
}

Vector2D Vector2D::operator+(const Vector2D &vector)
{
	std::cout << "+ operator" << std::endl;
	Vector2D vec;
	vec.arr[0] = this->arr[0] + vector.arr[0];
	vec.arr[1] = this->arr[1] + vector.arr[1];
	return vec;
}

Vector2D Vector2D::operator-(const Vector2D &vector)
{
	std::cout << "- operator" << std::endl;
	Vector2D vec;
	vec.arr[0] = this->arr[0] - vector.arr[0];
	vec.arr[1] = this->arr[1] - vector.arr[1];
	return vec;
}

Vector2D Vector2D::operator*(const Vector2D &vector)
{
	std::cout << "* operator" << std::endl;
	Vector2D vec;
	vec.arr[0] = this->arr[0] * vector.arr[0];
	vec.arr[1] = this->arr[1] * vector.arr[1];
	return vec;
}

void Vector2D::operator=(const Vector2D &vector)
{
	std::cout << "= operator" << std::endl;
	this->arr[0] = vector.arr[0];
	this->arr[1] = vector.arr[1];
}

bool Vector2D::operator==(const Vector2D &vector)
{
	std::cout << "== operator" << std::endl;
	return (this->arr[0] == vector.arr[0] && this->arr[1] == vector.arr[1]) ? true : false;	// If both vector values are equivalent return true
}

bool Vector2D::operator!=(const Vector2D &vector)
{
	std::cout << "!= operator" << std::endl;
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