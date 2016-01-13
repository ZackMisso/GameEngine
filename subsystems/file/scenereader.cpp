#include "scenereader.h"

// Before this class is implemented I still need to design a scene graph's file format

SceneReader* SceneReader::instance = 0x0;

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

void SceneReader::loadSceneGraph(const char* objfile,SceneGraph* scene) {
	// to be implemented
}

int SceneReader::readFloats(char *tok,int *buf,int bufsz) {
	// to be implemented
	return -1;
}

int SceneReader::readInts(char *tok,int *buf,int bufsz) {
	// to be implemented
	return -1;
}

int SceneReader::readChars(char *tok,char *buf,int bufsz) {
	// to be implemented
	return -1;
}

void SceneReader::processShip(char *tok) {
	// to be implemented
}

void SceneReader::processRot(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processScale(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processTrans(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processObject(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processLight(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processGrom(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processCamera(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::processAttribute(char *tok,SceneGraph* scene) {
	// to be implemented
}

void SceneReader::readScene(string scnfile,SceneGraph* scenep) {
	// to be implemented
}
