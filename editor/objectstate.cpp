#include "objectstate.h"

ObjectState::ObjectState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void ObjectState::displayState() {
	// to be implemented
}

void ObjectState::displayOptions() {
	// to be implemented
}

void ObjectState::reactToOption(int option) {
	// to be implemented
}

EditorState ObjectState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void ObjectState::handleInput() {
	// to be implemented
}
