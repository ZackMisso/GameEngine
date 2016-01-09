#ifndef __MAT4_H__
#define __MAT4_H__

// Since Matrices are so large they should only be operated on as pointers to avoid
// the overhead of copying them when they are passed into methods.

class Mat4 {
public:
	// instance variables
	float mat[4][4]; // TODO :: change this into a 16 len GLFloat array
	// constructors;
	Mat4();
	// methods
	void multiply(Mat4* other);
	static Mat4* matrixMultiply(Mat4 *one,Mat4 *two);
	Mat4* copy();
	void multMatrix();
	void print();
};

#endif
