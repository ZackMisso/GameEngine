#ifndef __MEMORYSUBSYSTEM_H__
#define __MEMORYSUBSYSTEM_H__

class MemorySubsystem {
private:
	// constructors
	MemorySubsystem();
	static MemorySubsystem *instance;
public:
	// destructor
	~MemorySubsystem();
	// creation
	static MemorySubsystem* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

MemorySubsystem* MemorySubsystem::instance = 0x0;

#endif
