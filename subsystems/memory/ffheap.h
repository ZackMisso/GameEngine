#ifndef __FIRSTFITHEAP_H__
#define __FIRSTFITHEAP_H__

#include "heap.h"

class FirstFitHeap : Heap {
public:
	// heap methods
	virtual void init(long size);
	virtual void free(void* ptr);
	virtual void* malloc(int size);
};

#endif
