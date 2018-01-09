// ********************** genArrayQueue.cpp *************************

#include <iostream>
#include "genArrayQueue.h"



template<class T, int size>
void ArrayQueue<T, size>::enqueue(const T& val) {
	if (!isFull()) {
		if (last == size-1 || last == -1) {    //last element is in the end or there is no element;
			storage[0] = val;
			last = 0;
			if (first == -1) {
				first = 0;
			}
		}
		else storage[++last] = val;
	}
	else std::cout << "Full queue." << std::endl;
}


template<class T, int size>
T ArrayQueue<T, size>::dequeue() {
	T temp;
	temp = storage[first];
	if (first == last) {
		first = last = -1;
	}

	else if (first == size-1) {
		first = 0;
	}

	else first++;
	return temp;
}