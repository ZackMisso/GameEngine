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
	// debug
	void print();
	// input handling
	void readScene(string scnfile,SceneGraph *scenep);
};

SceneReader* SceneReader::instance = 0x0;

#endif
