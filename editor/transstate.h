#ifndef __TRANSITIONSTATE_H__
#define __TRANSITIONSTATE_H__

#include "editorstate.h"

class TransitionState : public EditorState {
public:
	// constructors
	TransitionState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
