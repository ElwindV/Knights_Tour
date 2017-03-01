//VECTOR2 H
#ifndef VECTOR2_H
#define VECTOR2_H

//INCLUDES
#include <math.h>

//DEFINE TYPES
typedef float float32;

//VECTOR2 CLASS
class Vector2
{
public:
	int x;
	int y;

	Vector2(void);
	Vector2(int xValue, int yValue);
	Vector2(const Vector2 & v);
	Vector2(const Vector2 * v);

	~Vector2(void);

	void Set(int xValue, int yValue);

	//ASSINGMENT AND EQUALITY OPERATIONS
	inline Vector2 & Vector2::operator = (const Vector2 & v) { x = v.x; y = v.y; return *this; }
	inline Vector2 & Vector2::operator = (const int & f) { x = f; y = f; return *this; }
	inline Vector2 & Vector2::operator - (void) { x = -x; y = -y; return *this; }
	inline bool Vector2::operator == (const Vector2 & v) const { return (x == v.x) && (y == v.y); }
	inline bool Vector2::operator != (const Vector2 & v) const { return (x != v.x) || (y != v.y); }
	
	//VECTOR2 TO VECTOR2 OPERATIONS
	inline const Vector2 Vector2::operator + (const Vector2 & v) const { return Vector2(x + v.x, y + v.y); }
	inline const Vector2 Vector2::operator - (const Vector2 & v) const { return Vector2(x - v.x, y - v.y); }
	inline const Vector2 Vector2::operator * (const Vector2 & v) const { return Vector2(x * v.x, y * v.y); }
	inline const Vector2 Vector2::operator / (const Vector2 & v) const { return Vector2(x / v.x, y / v.y); }

	//VECTOR2 TO THIS OPERATIONS
	inline Vector2 & Vector2::operator += (const Vector2 & v) { x += v.x; y += v.y; return *this; }
	inline Vector2 & Vector2::operator -= (const Vector2 & v) { x -= v.x; y -= v.y; return *this; }
	inline Vector2 & Vector2::operator *= (const Vector2 & v) { x *= v.x; y *= v.y; return *this; }
	inline Vector2 & Vector2::operator /= (const Vector2 & v) { x /= v.x; y /= v.y; return *this; }

	//SCALER TO VECTOR2 OPERATIONS
	inline const Vector2 Vector2::operator + (int v) const { return Vector2(x + v, y + v); }
	inline const Vector2 Vector2::operator - (int v) const { return Vector2(x - v, y - v); }
	inline const Vector2 Vector2::operator * (int v) const { return Vector2(x * v, y * v); }
	inline const Vector2 Vector2::operator / (int v) const { return Vector2(x / v, y / v); }

	//SCALER TO THIS OPERATIONS
	inline Vector2 & Vector2::operator += (int v) { x += v; y += v; return *this; }
	inline Vector2 & Vector2::operator -= (int v) { x -= v; y -= v; return *this; }
	inline Vector2 & Vector2::operator *= (int v) { x *= v; y *= v; return *this; }
	inline Vector2 & Vector2::operator /= (int v) { x /= v; y /= v; return *this; }

};

#endif
//ENDFILE