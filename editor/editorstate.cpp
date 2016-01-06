#include "editorstate.h"

EditorState::EditorState(SceneNode* node) {
	currentNode = node;
	currentOption = -1;
}

void EditorState::displayState() {
	// does nothing until overridden
}

void EditorState::displayOptions() {
	// does nothing until overridden
}

void EditorState::reactToOption(int option) {
	// does nothing until overridden
}

EditorState EditorState::reactToTransition(SceneNode* node) {
	// does nothing until overridden
	return *this;
}

void EditorState::handleInput() {
	// does nothing until overridden
}
