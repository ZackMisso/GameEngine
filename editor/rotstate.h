#ifndef __ROTNODESTATE_H__
#define __ROTNODESTATE_H__

#include "editorstate.h"

class RotNodeState : public EditorState {
public:
	// constructors
	RotNodeState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
