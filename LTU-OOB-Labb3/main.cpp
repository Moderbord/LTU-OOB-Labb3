#include "pch.h"
#include "Matrix2D.h"
#include "Vector2D.h"
#include <iostream>

namespace {
	using std::cout;
	using std::cin;

}

int main()
{
	Vector2D vec1;
	Vector2D vec2(-3, 7);
	Vector2D vec3(3, 7);

	vec2 == vec3;
	vec1 = vec3;
	vec1 == vec3;
	vec1 == vec2;
}