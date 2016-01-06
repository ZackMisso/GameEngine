#ifndef __EDITORSTATE_H__
#define __EDITORSTATE_H__

#include "../scene/scenenode.h"

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
