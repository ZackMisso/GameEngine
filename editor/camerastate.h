#ifndef __CAMERASTATE_H__
#define __CAMERASTATE_H__

#include "editorstate.h"

class CameraState : EditorState {
public:
	// constructors
	CameraState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
