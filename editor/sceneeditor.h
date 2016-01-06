#ifndef __SCENEEDITOR_H__
#define __SCENEEDITOR_H__

// the editor will be command line based initially

class SceneEditor {
private:
	// static variables
	static SceneEditor* instance;
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

SceneEditor* SceneEditor::instance = 0x0;

#endif
