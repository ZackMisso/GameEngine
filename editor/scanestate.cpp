#include "scalestate.h"

ScaleState::ScaleState(SceneNode *node) : EditorState(node) {
	// to be implemented
}

void ScaleState::displayState() {
	// to be implemented
}

void ScaleState::displayOptions() {
	// to be implemented
}

void ScaleState::reactToOption(int option) {
	// to be implemented
}

EditorState ScaleState::reactToTransition(SceneNode* node) {
	EditorState state;
	// to be implemented
	return state;
}

void ScaleState::handleInput() {
	// to be implemented
}
