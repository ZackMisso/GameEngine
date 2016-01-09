#ifndef __SCALESTATE_H__
#define __SCALESTATE_H__

#include "editorstate.h"

class ScaleState : public EditorState {
public:
	// constructors
	ScaleState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
