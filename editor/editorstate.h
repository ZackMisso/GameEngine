#ifndef __EDITORSTATE_H__
#define __EDITORSTATE_H__

#include "../scene/scenenode.h"

// All possibly states that the editor can be defined by extend this class

// The editor is by Command Prompt and every possible state that it can be
// in are defined as extensions of this class. There should be one extension
// for every node type in the scene graph.

class EditorState {
protected:
	// instance variables
	SceneNode* currentNode;
	int currentOption;
public:
	// constructors
	EditorState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
