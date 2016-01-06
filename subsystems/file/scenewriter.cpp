#include "scenewriter.h"
//#include "../../scene/scenegraph.h"

SceneWriter::SceneWriter() {
	// to be implemented
}

SceneWriter::~SceneWriter() {
	// to be implemented
}

SceneWriter* SceneWriter::GetInstance() {
	return instance;
}

void SceneWriter::Initialize() {
	instance = new SceneWriter();
}

void SceneWriter::Destroy() {
	delete instance;
}

void SceneWriter::print() {
	// to be implemented if needed
}

void SceneWriter::writeScene(string dest,SceneGraph* scene) {
	// to be implemented
}
