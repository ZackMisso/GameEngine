#include "mat4.h"
#include <iostream>

using namespace std;

Mat4::Mat4(){
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			mat[i][j] = 0.0f;
}

void Mat4::print(){
	cout << "Printing the Matrix:" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			cout << mat[i][j];
		cout << endl;
	}
	cout << endl;
}

void Mat4::multiply(Mat4* other) {
	// to be implemented
}

Mat4* Mat4::matrixMultiply(Mat4* one,Mat4* two) {
	// to be implemented
	return 0x0;
}

Mat4* Mat4::copy() {
	// to be implemented
	return 0x0;
}

void Mat4::multMatrix() {
	// to be implemented
}
