#ifndef __SCENEEDITOR_H__
#define __SCENEEDITOR_H__

// the editor will be command line based initially

#include "editorstate.h"

class SceneEditor {
private:
	// static variables
	static SceneEditor* instance;
	// instance variables
	EditorState currentState;
	// constructors
	SceneEditor();
public:
	// deconstructor
	~SceneEditor();
	// creation
	static SceneEditor* GetInstance();
	static void Initialize();
	static void Destroy();
};

#endif
