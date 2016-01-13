#ifndef __SCENEREADER_H__
#define __SCENEREADER_H__

#include "../../scene/scenegraph.h"
#include <string>

using namespace std;

// still debating if this should be a singleton or not

class SceneReader {
private:
	// static variables
	static SceneReader* instance;
	// constructors
	SceneReader();
public:
	// deconstructor
	~SceneReader();
	// creation
	static SceneReader* GetInstance();
	static void Initialize();
	static void Destroy();
	// read/load methods
	void loadSceneGraph(const char* objfile,SceneGraph* scene);
	int readFloats(char *tok,int *buf,int bufsz);
	int readInts(char *tok,int *buf,int bufsz);
	int readChars(char *tok,char *buf,int bufsz);
	// process tokens
	void processShip(char *tok);
	void processRot(char *tok,SceneGraph* scene);
	void processScale(char *tok,SceneGraph* scene);
	void processTrans(char *tok,SceneGraph* scene);
	void processObject(char *tok,SceneGraph* scene);
	void processLight(char *tok,SceneGraph* scene);
	void processGrom(char *tok,SceneGraph* scene);
	void processCamera(char *tok,SceneGraph* scene);
	void processAttribute(char *tok,SceneGraph* scene);
	// input handling
	void readScene(string scnfile,SceneGraph *scene);
};

#endif
