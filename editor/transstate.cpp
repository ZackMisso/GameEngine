#include "transstate.h"

TransitionState::TransitionState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void TransitionState::displayState() {
	// to be implemented
}

void TransitionState::displayOptions() {
	// to be implemented
}

void TransitionState::reactToOption(int option) {
	// to be implemented
}

EditorState TransitionState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void TransitionState::handleInput() {
	// to be implemented
}
