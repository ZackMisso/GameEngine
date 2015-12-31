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
