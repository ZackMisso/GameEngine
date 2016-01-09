#include "geomstate.h"

GeomState::GeomState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void GeomState::displayState() {
	// to be implemented
}

void GeomState::displayOptions() {
	// to be implemented
}

void GeomState::reactToOption(int option) {
	// to be implemented
}

EditorState GeomState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void GeomState::handleInput() {
	// to be implemented
}
