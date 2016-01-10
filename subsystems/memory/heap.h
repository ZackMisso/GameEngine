#ifndef __HEAP_H__
#define __HEAP_H__

class Heap {
public:
	virtual void init(long size); // size in number of ints (4 bytes)
	virtual void free(void* ptr);
	virtual void* malloc(size_t size);
};

#endif
