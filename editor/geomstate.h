#ifndef __GEOMSTATE_H__
#define __GEOMSTATE_H__

#include "editorstate.h"

class GeomState : EditorState {
public:
	// constructors
	GeomState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
