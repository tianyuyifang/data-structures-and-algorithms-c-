//******************  genStack.h  *****************
//      generic class for vector implementation of stack

#ifndef STACK
#define STACK

#include <vector>

template<class T, int capacity = 30>
class Stack {
public:
	Stack() {
		pool.reserve(capacity);
	}

	void clear() {
		pool.clear();
	}

	bool isEmpty() const {
		return pool.empty();
	}

	T& topEl() {
		return pool.back();
	}

	T pop() {
		T val = pool.back();
		pool.pop_back();
		return val;
	}

	void push(const T& val) {
		pool.push_back(val);
	}
private:
	vector<T> pool;
};

#endif