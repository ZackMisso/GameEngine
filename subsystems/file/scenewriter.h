#ifndef __SCENEWRITER_H__
#define __SCENEWRITER_H__

#include <string>
#include "../../scene/scenegraph.h"

using namespace std;

class SceneWriter {
private:
	// static variables
	static SceneWriter* instance;
	// constructors
	SceneWriter();
public:
	// deconstructor
	~SceneWriter();
	// creation
	static SceneWriter* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
	// input handling
	void writeScene(string dest,SceneGraph* scene);
};

#endif
