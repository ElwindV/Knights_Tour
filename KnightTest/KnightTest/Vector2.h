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
	//MEMBERS
	float32 x;
	float32 y;

	//CONSTRUCTORS
	Vector2(void);
	Vector2(float32 xValue, float32 yValue);
	Vector2(const Vector2 & v);
	Vector2(const Vector2 * v);

	//DECONSTRUCTOR
	~Vector2(void);

	//METHODS
	void Set(float32 xValue, float32 yValue);

	float32 Length() const;
	float32 LengthSquared() const;
	float32 Distance(const Vector2 & v) const;
	float32 DistanceSquared(const Vector2 & v) const;
	float32 Dot(const Vector2 & v) const;
	float32 Cross(const Vector2 & v) const;

	Vector2 & Normal();
	Vector2 & Normalize();

	//ASSINGMENT AND EQUALITY OPERATIONS
	inline Vector2 & Vector2::operator = (const Vector2 & v) { x = v.x; y = v.y; return *this; }
	inline Vector2 & Vector2::operator = (const float32 & f) { x = f; y = f; return *this; }
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
	inline const Vector2 Vector2::operator + (float32 v) const { return Vector2(x + v, y + v); }
	inline const Vector2 Vector2::operator - (float32 v) const { return Vector2(x - v, y - v); }
	inline const Vector2 Vector2::operator * (float32 v) const { return Vector2(x * v, y * v); }
	inline const Vector2 Vector2::operator / (float32 v) const { return Vector2(x / v, y / v); }

	//SCALER TO THIS OPERATIONS
	inline Vector2 & Vector2::operator += (float32 v) { x += v; y += v; return *this; }
	inline Vector2 & Vector2::operator -= (float32 v) { x -= v; y -= v; return *this; }
	inline Vector2 & Vector2::operator *= (float32 v) { x *= v; y *= v; return *this; }
	inline Vector2 & Vector2::operator /= (float32 v) { x /= v; y /= v; return *this; }
};

#endif
//ENDFILE