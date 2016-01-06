#include "sceneeditor.h"

SceneEditor::SceneEditor() {
	// to be implemented
}

SceneEditor::~SceneEditor() {
	// to be implemented
}

SceneEditor* SceneEditor::GetInstance() {
	return instance;
}

void SceneEditor::Initialize() {
	instance = new SceneEditor();
}

void SceneEditor::Destroy() {
	delete instance;
}
