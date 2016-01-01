#include "quat.h"
#include <math.h>
#include <iostream>

using namespace std;

Quat::Quat() {
	v.xpos = 0.0f;
	v.ypos = 0.0f;
	v.zpos = 0.0f;
	s = 0.0f;
	type = Rot;
}

Quat::Quat(float sc,float *vec) {
	v.xpos = vec[0];
	v.ypos = vec[1];
	v.zpos = vec[2];
	s = sc;
	type = Rot;
}

Quat::Quat(float sc,float x,float y,float z) {
	v.xpos = x;
	v.ypos = y;
	v.zpos = z;
	s = sc;
	type = Rot;
}

Quat::Quat(float sc,Vec3 &vec) {
	v.xpos = vec.xpos;
	v.ypos = vec.ypos;
	v.zpos = vec.zpos;
	s = sc;
	type = Rot;
}

Quat::~Quat() {
	// This really is not needed
}

Quat* Quat::copy() {
	return new Quat(s,v);
}

Mat4* Quat::toMatrix() {
	// Maybe create test to make sure this is a valid quaternion
	Mat4 *matrix = new Mat4();
	matrix->mat[0][0] = 1 - 2*v.ypos*v.ypos - 2*v.zpos*v.zpos;
	matrix->mat[1][0] = 2*v.xpos*v.ypos - 2*s*v.zpos;
	matrix->mat[2][0] = 2*v.xpos*v.zpos + 2*s*v.ypos;
	matrix->mat[3][0] = 0.0f;
	matrix->mat[0][1] = 2*v.xpos*v.ypos + 2*s*v.zpos;
	matrix->mat[1][1] = 1 - 2*v.xpos*v.xpos - 2*v.zpos*v.zpos;
	matrix->mat[2][1] = 2*v.ypos*v.zpos - 2*s*v.xpos;
	matrix->mat[3][1] = 0.0f;
	matrix->mat[0][2] = 2*v.xpos*v.zpos - 2*s*v.ypos;
	matrix->mat[1][2] = 2*v.ypos*v.zpos + 2*s*v.xpos;
	matrix->mat[2][2] = 1 - 2*v.xpos*v.xpos - 2*v.ypos*v.ypos;
	matrix->mat[3][2] = 0.0f;
	matrix->mat[0][3] = 0.0f;
	matrix->mat[1][3] = 0.0f;
	matrix->mat[2][3] = 0.0f;
	matrix->mat[3][3] = 1.0f;
	return matrix;
}

void Quat::conjugate() {
	v.negate();
}

Quat* Quat::makeQuatAngleAxis(float angle,Vec3 &axis) {
	float halfAngle = angle/2;
	float sined = sin(halfAngle);
	Vec3 c(axis);
	c.normalize();
	c = c*sined;
	return new Quat(cos(halfAngle),c);
}

void Quat::apply() {
	// to be implemented
}

void Quat::applyToMatrix(Mat4 &matrix) {
	// to be implemented
}

void Quat::print() {
	cout << "Printing Quaternion Values:";
	cout << s << " ";
	v.print();
}

// TODO :: TEST
Vec3 Quat::rotateVector(Vec3 &vec) {
	// maybe add check if the quaternion is valid
	Quat quat(0,vec);
	Quat *inv = copy();
	inv->conjugate();
	inv->multiply(quat);
	inv->multiply(*this);
	Vec3 ret = inv->v.copy();	
	delete inv;
	return ret;
}

// TODO :: TEST
void Quat::multiply(Quat &other) {
	// maybe add check if the quaternion is valid
	float tmp = s*other.s - v*other.v;
	Vec3 v1 = other.v*s;
	Vec3 v2 = v*other.s;
	v=v/other.v;
	v=v+v1+v2;
	s=tmp;
}
