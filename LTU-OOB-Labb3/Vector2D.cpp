#include "pch.h"
#include "Vector2D.h"


Vector2D::Vector2D(float x, float y) {
	arr[0] = x;
	arr[1] = y;
}

float Vector2D::getX()
{ 
	return arr[0]; 
}

float Vector2D::getY()
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