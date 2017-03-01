//VECTOR2 CPP
#include "stdafx.h"
#include "Vector2.h"

//CONSTRUCTORS
Vector2::Vector2(void) : x(0), y(0) { }
Vector2::Vector2(int xValue, int yValue) : x(xValue), y(yValue) { }
Vector2::Vector2(const Vector2 & v) : x(v.x), y(v.y) { }
Vector2::Vector2(const Vector2 * v) : x(v->x), y(v->y) { }

//DECONSTRUCTOR
Vector2::~Vector2(void) { }

//METHODS
void Vector2::Set(int xValue, int yValue) { x = xValue; y = yValue; }
