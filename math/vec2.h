#ifndef __VEC2_H__
#define __VEC2_H__

class Vec2 {
public:
	// instance variables
	float xpos; // made public to reduce overhead of getters and setters
	float ypos;
	// constructors
	Vec2();
	Vec2(float x,float y);
	// methods
	void normalize();
	void negate();
	float magnitude();
	Vec2 copy();
	// debug
	void print();
	// operators
	Vec2 operator+(const Vec2& c);
	//Vec2 operator+=(const Vec2& c);
	Vec2 operator-(const Vec2& c);
	//Vec2 operator-=(const Vec2& c);
	Vec2 operator*(const float c);
	Vec2 operator/(const float c);
};

#endif
