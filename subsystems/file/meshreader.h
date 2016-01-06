#ifndef __MESHREADER_H__
#define __MESHREADER_H__

#include "../../physics/trimesh.h"
#include <iostream>
#include <fstream>
#include <cstring>

#define LINE_SIZE 1024
#define TOKEN_LEN 8

using namespace std;

enum TokenID {T_NONE=-1,T_VERT,T_FACE};

struct TokenPair {
	char str[TOKEN_LEN];
	TokenID id;
	bool operator==(const TokenPair &other) const {
		return strcmp(str,other.str) == 0 && id==other.id;
	}
	bool operator!=(const TokenPair &other) const {
		return !(*this==other);
	}
};

// this class is a singleton

class MeshReader {
private:
	// instance variables
	static MeshReader *instance;
	TokenPair emptyPair;
	TokenPair tokenMap[3];
	const char* tokSeps = " \t";
	// constructors
	MeshReader();
public:
	// deconstructor
	~MeshReader();
	// creation
	static MeshReader* GetInstance();
	void Initialize();
	void Destroy();
	// read/load methods
	void loadObjTriMesh(const char* objfile,TriMesh* mesh);
	int readFloats(char *tok,float *buf,int bufsz);
	int readInts(char *tok,int *buf,int bufsz);
	// process tokens
	void processSkip(char *tok);
	void processVertex(char *tok,TriMesh *mesh);
	void processFace(char *tok,TriMesh *mesh);
	TokenPair *tokenMatch(char *tok); 
};

MeshReader* MeshReader::instance = 0x0;

#endif
