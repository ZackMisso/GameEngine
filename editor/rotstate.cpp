#include "rotstate.h"
#include <iostream>

using namespace std;

RotNodeState::RotNodeState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void RotNodeState::displayState() {
	// to be implemented
}

void RotNodeState::displayOptions() {
	// to be implemented
}

void RotNodeState::reactToOption(int option) {
	// to be implemented
}

EditorState RotNodeState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void RotNodeState::handleInput() {
	// to be implemented
}
