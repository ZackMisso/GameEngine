#include "camerastate.h"

CameraState::CameraState(SceneNode* node) : EditorState(node) {
	// to be implemented
}

void CameraState::displayState() {
	// to be implemented
}

void CameraState::displayOptions() {
	// to be implemented
}

void CameraState::reactToOption(int option) {
	// to be implemented
}

EditorState CameraState::reactToTransition(SceneNode* node) {
	EditorState state(0x0);
	// to be implemented
	return state;
}

void CameraState::handleInput() {
	// to be implemented
}
