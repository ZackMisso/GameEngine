#ifndef __SOUNDSUBSYSTEM_H__
#define __SOUNDSUBSYSTEM_H__

class SoundSubsystem {
private:
	// static variables
	static SoundSubsystem* instance;
	// constructors
	SoundSubsystem();
public:
	// destructor
	~SoundSubsystem();
	static SoundSubsystem* GetInstance();
	static void Initialize();
	static void Destroy();
	// debug
	void print();
};

SoundSubsystem( SoundSubsystem::isntance = 0x0;

#endif
