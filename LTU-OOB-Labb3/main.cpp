#include "pch.h"
#include "Matrix2D.h"
#include "Vector2D.h"
#include "Monster.h"
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
// 5) A method for transformation of a 2D vector(use the operator * here)
// 6) A method for creating a new matrix as a transpose										DONE
// 7) A method for creating a new matrix as a rotation matrix								DONE?
// 8) Print method to print the values of the fields										DONE

namespace {
	using std::cout;
	using std::cin;

}

int main()
{


	//Vector2D vec1;
	//Vector2D vec2(2, 5);
	//Vector2D vec3(3, 4);

	//vec3.dotProduct(vec1);

	Matrix2D mat1(1, 2, 3, 4);
	Matrix2D mat2(Matrix2D::identityMatrix());

	mat1 * mat2;
	Matrix2D mat3;
	mat3 = mat1 * mat2;
	mat2.setA(2);
	mat2.setB(1);
	mat2.setC(3);
	mat2.setD(4);

	mat2.getA();
	mat2.getB();
	mat2.getC();
	mat2.getD();

	mat1.transpose();
	Matrix2D mat4(5, 7, 1, 9);
	mat4.transpose();

	float *test = mat4.getPointer();

	Matrix2D mat5 = Matrix2D::rotationMatrix(75, 75, 75, 75);

	mat5.printA();
	mat5.printB();
	mat5.printC();
	mat5.printD();

	mat1.print();

}