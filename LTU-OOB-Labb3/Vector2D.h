#pragma once
class Vector2D
{
	friend class Matrix2D;
private:
	float arr[2];

public:
	// Constructors
	Vector2D();
	Vector2D(float x, float y);
	Vector2D(const Vector2D &vector);

	// Operators
	Vector2D operator+(const Vector2D &vector);
	Vector2D operator-(const Vector2D &vector);
	Vector2D operator*(const Vector2D &vector);
	void operator=(const Vector2D &vector);
	bool operator==(const Vector2D &vector);
	bool operator!=(const Vector2D &vector);

	// Getters and setters
	const float getX();
	const float getY();
	void setX(float x);
	void setY(float y);

	// Computations
	Vector2D normalized();
	float vectorLength();
	float dotProduct(const Vector2D &vector);

	// Additional functionality
	const void printX();
	const void printY();
	const void printXY();
};

