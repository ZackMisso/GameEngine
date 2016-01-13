#ifndef __STACK_H__
#define __STACK_H__

template <class T>

// TODO :: Will need to overload new and delete to work with memsub

class Stack {
private:
	T* ary;
	int size;
	int max;

	void extend() {
		max+=size*.3+10;
		T* tmp=new T[max];
		for(int i=0;i<size;i++)
			tmp[i]=ary[i];
		delete[] ary;
		ary=tmp;
	};
public:
	Stack() {
		size=0;
		max=10;
		ary=new T[max];
	}

	Stack(int siz) {
		size=0;
		max=siz+1;
		ary=new T[max];
	}

	~Stack() {
		delete[] ary;
	}

	void push(T val) {
		ary[size]=val;
		size++;
		if(size==max) {
			extend();
		}
	}

	bool hasNext() {
		return size>0;
	}

	T pop() {
		size--;
		return ary[size];
	}

	T peek() {
		return ary[size-1];
	}
};

#endif
