#ifndef __VEC2D_H__
#define __VEC2D_H__

class Vec2d {
public:
	// instance variables
	double xpos;
	double ypos;
	// constructors
	Vec2d();
	Vec2d(double x,double y);
	// methods
	void normalize();
	void negate();
	double magnitude();
	// operators
	Vec2d operator+(const Vec2d& c);
	Vec2d operator-(const Vec2d& c);
	Vec2d operator*(const double c);
	Vec2d operator/(const double c);
};

#endif
