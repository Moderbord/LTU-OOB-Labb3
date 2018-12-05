#pragma once
class Matrix2D
{
private:
	float arr[4];

public:
	// Constructors
	Matrix2D();
	Matrix2D(float a, float b, float c, float d);
	Matrix2D(const Matrix2D &matrix);

	// Operators
	Matrix2D operator*(const Matrix2D &matrix);
	void operator=(const Matrix2D &matrix);

	// Setters and getters
	const float getA();
	const float getB();
	const float getC();
	const float getD();
	const float getAll();
	float setA(float a);
	float setB(float b);
	float setC(float c);
	float setD(float d);
	float setAll(float x);

	// Computations
	Matrix2D transpose();
	Matrix2D rotationMatrix();

	// Additional functionality
	const static Matrix2D identityMatrix();
	const void printMatrix();
	const void printA();
	const void printB();
	const void printC();
	const void printD();

};

