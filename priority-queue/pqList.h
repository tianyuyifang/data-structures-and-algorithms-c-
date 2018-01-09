// ********************** pqList.h **********************

#include <iostream>


using namespace std;

struct Node {
	int priority;
	int info;
	struct Node *prev;
};


class Priority_Queue {
private:
	Node *front;
public:
	Priority_Queue() {
		front = 0;
	}

	void insert(int item, int priority) {
		
		Node *temp, *q;
		temp = new Node;
		temp->info = item;
		temp->priority = priority;

		if(front == NULL || priority < front->priority) {    // no element or item to be inserted has highest priority;
			temp->prev = front;
			front = temp;
		}

		else {
			q = front;    //q is used to locate where temp should be inserted;
			while(q->prev != 0 && q->prev->priority <= priority) {
				q = q->prev;
			}
			temp->prev = q->prev;
			q->prev = temp;
		}
	}

	void del() {
		Node *temp;
		
		if(front == 0) {
			cout << "Queue Underflow .\n";
		}

		else {
			temp = front;
			cout << "Deleted item is: " << temp->info << endl;
			front = front->prev;
			delete temp;
		}
	}

	int get_front() {
		return front->info;
	}

	void display() {
		Node *ptr;
		ptr = front;
		
		if (front == 0) {
			cout << "Queue is empty.\n";
		}

		else {
			cout << "Queue is :\n";
			cout << "Priority      Item\n";
			while(ptr != 0) {
				cout << ptr->priority << "      " << ptr->info << endl;
				ptr = ptr->prev;
			}
		}
	}

};




