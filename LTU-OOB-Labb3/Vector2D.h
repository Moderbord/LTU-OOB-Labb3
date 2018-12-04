#pragma once
class Vector2D
{
private:
	float arr[2];
public:
	Vector2D();
	Vector2D(float x, float y);
	Vector2D(const Vector2D &vector);
	Vector2D operator+(const Vector2D &vector);
	Vector2D operator-(const Vector2D &vector);
	Vector2D operator*(const Vector2D &vector);
	void operator=(const Vector2D &vector);
	bool operator==(const Vector2D &vector);
	bool operator!=(const Vector2D &vector);
	const float getX();
	const float getY();
	void setX(float x);
	void setY(float y);
};

