#include "attribstate.h"

AttributeState::AttributeState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void AttributeState::displayState() {
	// to be implemented
}

void AttributeState::displayOptions() {
	// to be implemented
}

void AttributeState::reactToOption(int option) {
	// to be implemented
}

EditorState AttributeState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void AttributeState::handleInput() {
	// to be implemented
}
