//************************ genQueue.h ***********************
// generic queue implemented with doubly linked list


#ifndef DLL_QUEUE
#define DLL_QUEUE

#include<list>

using namespace std;

template<class T>
class Queue {
public:
	Queue() {
	}

	void clear() {
		lst.clear();
	}

	bool isEmpty() const {
		return lst.empty();
	}

	T front() {
		return lst.front();
	}

	T dequeue() {
		T val = lst.front();
		lst.pop_front();
		return val;
	}

	void enqueue(const T& val) {
		lst.push_back(val);
	}
private:
	list<T> lst;
};


#endif