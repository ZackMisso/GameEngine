#include "transformation.h"

Transformation::Transformation(){
	type = N;
}

Mat4* Transformation::toMatrix(){
	//Mat4* matrix = new Mat4();
	//matrix->mat[0][0] = 1;
	//matrix->mat[1][1] = 1;
	//matrix->mat[2][2] = 1;
	//matrix->mat[3][3] = 1;
	//return matrix;
	return 0x0;
}

void Transformation::apply(){
	// does nothing
}

void Transformation::applyToMatrix(Mat4* matrix){
	// does nothing
}

void Transformation::print(){
	// dpes nothing
}
