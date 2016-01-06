#include "scenereader.h"

// Before this class is implemented I still need to design a scene graph's file format

SceneReader::SceneReader() {
	// to be implemented
}

SceneReader::~SceneReader() {
	// to be implemented
}

SceneReader* SceneReader::GetInstance() {
	return instance;
}

void SceneReader::Initialize() {
	instance = new SceneReader();
}

void SceneReader::Destroy() {
	delete instance;
}

void SceneReader::print() {
	// to be implemented if needed
}

void SceneReader::readScene(string scnfile,SceneGraph* scenep) {
	// to be implemented
}
