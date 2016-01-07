#ifndef __THREADSUBSYSTEM_H__
#define __THREADSUBSYSTEM_H__

// this is a singleton class

class ThreadSubsystem {
private:
	// static variables
	static ThreadSubsystem* instance;
	// constructors
	ThreadSubsystem();
public:
	// destructor
	~ThreadSubsystem();
	static ThreadSubsystem* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

ThreadSubsystem* ThreadSubsystem::instance = 0x0;

#endif
