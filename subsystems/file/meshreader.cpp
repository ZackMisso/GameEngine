#include "meshreader.h"

MeshReader::MeshReader() {
	// does nothing for now
}

MeshReader::~MeshReader() {
	// does nothing for now
}

MeshReader* MeshReader::GetInstance() {
	return instance;
}

void MeshReader::Initialize() {
	instance = new MeshReader();
}

void MeshReader::Destroy() {
	delete instance;
}

void MeshReader::loadObjTriMesh(const char* objfile,TriMesh* mesh) {
	// to be implemetned
}

int MeshReader::readFloats(char *tok,float *buf,int bufsz) {
	// to be implemented
	return -1;
}

int MeshReader::readInts(char *tok,int *buf,int bufsz) {
	// to be implemented
	return -1;
}

void MeshReader::processSkip(char *tok) {
	// to be implemented
}

void MeshReader::processVertex(char *tok,TriMesh *mesh) {
	// to be implemented
}

void MeshReader::processFace(char *tok,TriMesh *mesh) {
	// to be implemented
}

TokenPair* MeshReader::tokenMatch(char tok) {
	// to be implemented
	return 0x0;
} 
