#ifndef __QUAT_H__
#define __QUAT_H__

#include "../math/vec3.h"

class Quat : public Transformation {
private:
	float s;
public:
	Vec3 v;
	// constructors
	/*Quat();
	Quat(float sc,float *vec);
	Quat(float sc,float x,float y,float z);
	Quat(float sc,Vec3 &v);
	// destructor
	~Quat();
	// methods
	Quat* copy();
	virtual Mat4* toMatrix();
	void conjugate();
	static Quat* makeQuatAngleAxis(float angle,Vec3 &axis);
	// applications
	virtual void apply();
	virtual void applyToMatrix(Mat4 &matrix);
	// debug
	void print();
	// operator methods
	Vec3 rotateVector(Vec3 &vec);
	void multiply(Quat *other);*/
}

#endif
