#pragma once
class Vector2D
{
private:
	float arr[2];
public:
	Vector2D(float x, float y);
	float getX();
	float getY();
	void setX(float x);
	void setY(float y);
};

