#include "meshreader.h"

MeshReader* MeshReader::instance = 0x0;

MeshReader::MeshReader() {
	emptyPair = {"",T_NONE};
	//tokenMap = { {"v", T_VERT}, {"f", T_FACE}, emptyPair};
	tokenMap[0] = {"v",T_VERT};
	tokenMap[1] = {"f",T_FACE};
	tokenMap[2] = emptyPair;
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
	fstream ifs;
	char line[LINE_SIZE];
	char *tok;
	ifs.open(objfile);
	while(!ifs.eof()) {
		ifs.getline(line,LINE_SIZE);
		tok=strtok(line,tokSeps);
		TokenPair *ptok=tokenMatch(tok);
		if(ptok){
			switch(ptok->id) {
				case T_VERT: processVertex(tok,mesh); break;
				case T_FACE: processFace(tok,mesh); break;
				default: /* processSkip(tok)  */ break;
			}
		}
	}
	ifs.close();
}

int MeshReader::readFloats(char *tok,float *buf,int bufsz) {
	int i=0;
	while((tok=strtok(0,tokSeps)) && i<bufsz)
		buf[i++]=atof(tok);
	return i;
}

int MeshReader::readInts(char *tok,int *buf,int bufsz) {
	int i=0;
	while((tok=strtok(0,tokSeps)) && i<bufsz)
		buf[i++]=atoi(tok);
	return i;
}

void MeshReader::processSkip(char *tok) {
	// implement maybe... not really needed for basic obj files tho
}

// TODO :: Fix linker errors

void MeshReader::processVertex(char *tok,TriMesh *mesh) {
	float values[3];
	int cnt=readFloats(tok,values,3);
	//if(cnt>=3) mesh->addVertex(values);
}

void MeshReader::processFace(char *tok,TriMesh *mesh) {
	int ids[256];
	int cnt=readInts(tok,ids,256);
	if(cnt>=3) {
		int tri[3] = {ids[0]-1,ids[1]-1,ids[2]-1};
		//mesh->addFace(tri);
		for(int i=3;i<cnt;i++) {
			tri[1] = tri[2];
			tri[2] = ids[i]-1;
			//mesh->addFace(tri);
		}
	}
}

TokenPair* MeshReader::tokenMatch(char *tok) {
	if(!tok) return 0x0;
	TokenPair *ptok = &tokenMap[0];
	for(;*ptok!=emptyPair&&strcmp(ptok->str,tok)!=0;ptok++) {}
	if(*ptok==emptyPair) ptok=0x0;
	return ptok;
}
