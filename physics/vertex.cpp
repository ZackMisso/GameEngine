#include "vertex.h"

Vertex::Vertex() {
	pos.xpos = 0.0f;
	pos.ypos = 0.0f;
	pos.zpos = 0.0f;
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

Vertex::Vertex(float *vals) {
	pos.xpos = vals[0];
	pos.ypos = vals[1];
	pos.zpos = vals[2];
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

Vertex::Vertex(Vec3 position) {
	pos.xpos = position.xpos;
	pos.ypos = position.ypos;
	pos.zpos = position.zpos;
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

Vertex::Vertex(float x,float y,float z) {
	pos.xpos = x;
	pos.ypos = y;
	pos.zpos = z;
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

Vec3 Vertex::getPos() { return pos; }
Vec3 Vertex::getNorm() { return norm; }

void Vertex::addToNorm(Vec3 nor) {
	// to be implemented
}

void Vertex::normalizeNorm() {
	norm.normalize();
}
