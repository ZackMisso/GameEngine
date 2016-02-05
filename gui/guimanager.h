#ifndef __GUIMANAGER_H__
#define __GUIMANAGER_H__

class GuiManager {
private:
	// singleton object
	static GuiManager* instance;
	// constructors
	GuiManager();
public:
	// destructor
	~GuiManager();
	static GuiManager* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

#endif
