// exmaple using queue 

#include <iostream>
#include "genArrayQueue.h"
#include "genArrayQueue.cpp"
#include "genQueue.h"

using namespace std;

int main() {

	//test of genArrayQueue
	cout << "Test of class ArrayQueue: \n";

	ArrayQueue<int, 100> aq;
	cout << "The state of isEmpty() is " << aq.isEmpty() << endl;
	for (int i=0; i<9; i++) {
		aq.enqueue(i);
	}

	for (;!aq.isEmpty();) {
		cout << aq.dequeue() << endl;
	}

	cout << "The state of isEmpty() is " << aq.isEmpty() << endl;

	//test of genQueue
	cout << "Test of class Queue: \n";

	Queue<int> q;
	cout << "The state of isEmpty() is " << q.isEmpty() << endl;
	for (int i=0; i<9; i++) {
		q.enqueue(i);
	}

	for (;!q.isEmpty();) {
		cout << q.dequeue() << endl;
	}

	cout << "The state of isEmpty() is " << q.isEmpty() << endl;
	return 0;
}