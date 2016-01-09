#ifndef __LIGHTSTATE_H__
#define __LIGHTSTATE_H__

#include "editorstate.h"

class LightState : public EditorState {
public:
	// constructors
	LightState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
