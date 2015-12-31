#ifndef __VEC2I_H__
#define __VEC2I_H__

class Vec2i {
public:
	// instance variables
	int xpos;
	int ypos;
	// constructors
	Vec2i();
	Vec2i(int x,int y);
	// methods
	void negate();
	int magnitude();
	// operators
	Vec2i operator+(const Vec2i& c);
	Vec2i operator-(const Vec2i& c);
	Vec2i operator*(const int c);
	Vec2i operator/(const int c);
};

#endif
