//**************************   genListStack.h  **************************
//       generic stack defined as a doubly linked list


#ifndef LL_STACK
#define LL_STACK

#include <list>

template<class T>
class LLStack {
public:
	LLStack() {
	}

	void clear() {
		lst.clear();
	}

	bool isEmpty() const {
		return lst.empty();
	}

	T& topEl() {
		return lst.back();
	}

	T pop() {
		T val = lst.back();
		lst.pop_back();
		return val;
	}

	void push_back(const T& val) {
		lst.push_back(val);
	}
private:
	list<T> lst;
};

#endif