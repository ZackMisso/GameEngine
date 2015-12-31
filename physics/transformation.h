#ifndef __TRANSFORMATION_H__
#define __TRANSFORMATION_H__

#include "../math/mat4.h"

enum TransformType {Rot,Scal,Tran,N};

class Transformation{
public:
	// instance variables
	TransformType type;
	// constructors
	Transformation();
	// methods
	virtual Mat4* toMatrix();
	virtual void apply();
	virtual void applyToMatrix(Mat4 *matrix);
	virtual void print();
};

#endif
