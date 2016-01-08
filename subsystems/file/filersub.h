#ifndef __FILERSUBSYSTEM_H__
#define __FILERSUBSYSTEM_H__

class FilerSubsystem {
private:
	// instance variables
	static FilerSubsystem* instance;
	// constructors
	FilerSubsystem();
public:
	// destructor
	~FilerSubsystem();
	// creation
	static FilerSubsystem* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

#endif
