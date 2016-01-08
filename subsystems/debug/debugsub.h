#ifndef __DEBUGSUBSYSTEM_H__
#define __DEBUGSUBSYSTEM_H__

class DebugSubsystem {
private:
	// instance variables
	static DebugSubsystem* instance;
	// constructors
	DebugSubsystem();
public:
	// deconstructor
	~DebugSubsystem();
	// creation
	static DebugSubsystem* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

#endif
