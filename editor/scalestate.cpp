#include "scalestate.h"

ScaleState::ScaleState(SceneNode* node) : EditorState(node) {
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
	EditorState state(0x0);
	// to be implemented
	return state;
}

void ScaleState::handleInput() {
	// to be implemented
}
