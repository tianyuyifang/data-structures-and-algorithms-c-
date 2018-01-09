#include <iostream>
#include "intSLList.h"

IntSLList::~IntSLList() {
	for (IntSLLNode *p; !isEmpty();) {
		p = head->next;
		delete head;
		head = p;
	}
}

void IntSLList::addToHead(int val) {
	head = new IntSLLNode(val, head);
	if (tail == 0) tail = head;
}

void IntSLList::addToTail(int val) {
	if (tail != 0) {    // if list is not empty;
		tail->next = new IntSLLNode(val);
		tail = tail->next;
	}
	else head = tail = new IntSLLNode(val);
}

int IntSLList::deleteFromHead() {
	int val = head->info;
	IntSLLNode *temp = head;
	if (head == tail) {    // if only one node in the list;
		head = tail = 0;
	}
	else head = head->next;
	delete temp;
	return val;
}

int IntSLList::deleteFromTail() {
	int val = tail->info;
	if (head == tail) {    // if only one node in the list;
		head = tail = 0;
		delete head;
	}
	else {    // if more than one node in the list;
		IntSLLNode *temp;    // find the predecessor of tail;
		for (temp = head; temp->next != tail; temp = temp->next);
		delete tail;
		tail = temp;    // the predecessor of tail becomes tail;
		tail->next = 0;    // the tail points to 0;
	}
	return val;
}

void IntSLList::deleteNode(int val) {
	if (head != 0) {    // if list is nonempty;
		if (head == tail && val == head->info) {    // if only one node in the list;
			delete head;
			head = tail = 0;
		}
	

		else if (val == head->info) {
			IntSLLNode *temp = head;
			head = head->next;
			delete temp;
		}

		else {
			IntSLLNode *pred, *temp;
			for (pred = head, temp = head->next;
				temp != 0 && !(temp->info == val);
				pred = pred->next, temp = temp->next);
			if (temp != 0) {
				pred->next = temp->next;
				if (temp == tail) tail = pred;
				delete temp;
			}
		}
	}
}

bool IntSLList::isInList(int val) const {
	IntSLLNode *temp;
	for (temp = head; temp != 0 && !(temp->info == val); temp = temp->next);
	return temp != 0;
}














