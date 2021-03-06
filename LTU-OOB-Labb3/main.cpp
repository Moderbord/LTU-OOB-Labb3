#include "pch.h"
#include "Matrix2D.h"
#include "Vector2D.h"
#include <iostream>

// The Vector2Dclass should have following features :										--
// 1) Implement the components of the vector(x, y) using a float array.						DONE
// 2) Addition, subtraction(overload operators + and -)										DONE
// 3) Methods for Dot product																DONE
// 4) Methods for Length, normalization														DONE
// 5) Get / Set features for the fields														DONE
// 6) Constructors for all fields, for no fieldsas well as copyingconstructor				DONE
// 7) Overload assignment operators(= ), and comparison operators(== , != )					DONE
// 8) Overloadbinary operands(+, -, *) for addition, subtraction, product					DONE
// 9) Print function to print the values of the fields										DONE
//																							--
// Implement a class for 2D matrices with the following features :							--
// 1) Implement the matrix data as a float array.The size of the Matrix should be 2x2.		DONE
// 2) Overload binary Operator * (matrix multiplication) and assignment Operator(= )		DONE
// 3) Create constructors that take :														--
	// a) Initial values for all fields														DONE
	// b) an identity matrix																DONE?
	// c) another matrix(i.e.copy constructor)												DONE
// 4) Get / Set methods for matrix components												DONE
// 5) A method for transformation of a 2D vector(use the operator * here)					DONE
// 6) A method for creating a new matrix as a transpose										DONE
// 7) A method for creating a new matrix as a rotation matrix								DONE?
// 8) Print method to print the values of the fields										DONE

namespace {
	using std::cout;
	using std::cin;

}

int main()
{
	Matrix2D mat = Matrix2D::rotationMatrix(90, 90, 90, 90);

	Vector2D vector(3, 4);
	Vector2D rotated = mat * vector;
	Vector2D norm = rotated.normalized();
	float normX = norm.getX() / 2;
	float normY = norm.getY() / 2;
}