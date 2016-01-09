#include "lightstate.h"

LightState::LightState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void LightState::displayState() {
	// to be implemented
}

void LightState::displayOptions() {
	// to be implemented
}

void LightState::reactToOption(int option) {
	// to be implemented
}

EditorState LightState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void LightState::handleInput() {
	// to be implemented
}
