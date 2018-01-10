#include <iostream>
#include "genDLList.h"

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList() {
	for (DLLNode<T> *temp; !isEmpty(); ) {
		temp = head->next;
		delete head;
		head = temp;
	}
}

template<class T>
void DoublyLinkedList<T>::addToDLLHead(const T& val) {
	head = new DLLNode<T>(val, head, 0);
	if (tail == 0) tail = head;
	else head->next->prev = head;
}

template<class T>
void DoublyLinkedList<T>::addToDLLTail(const T& val) {
	if (tail != 0 ) {
		tail = new DLLNode<T>(val, 0, tail);
		tail->prev->next = tail;
	}
	else head = tail = new DLLNode<T>(val);
}

template<class T>
T DoublyLinkedList<T>::deleteFromDLLHead() {
	T val = head->info;
	if (head == tail) {
		delete head;
		head = tail = 0;
	}
	else {
		head = head->next;
		delete head->prev;
		head->prev = 0;
	}
	return val;
}

template<class T>
T DoublyLinkedList<T>::deleteFromDLLTail() {
	T val = tail->info;
	if (head == tail) {
		delete head;
		head = tail = 0;
	}
	else {
		tail = tail->prev;
		delete tail->next;
		tail->next = 0;
	}
	return val;
}

template<class T>
void DoublyLinkedList<T>::deleteNode(const T& val) {
	if (head != 0) {    // if list is nonempty;
		if (head == tail && val == head->info) {    // if only one node in the list;
			delete head;
			head = tail = 0;
		}
	

		else if (val == head->info) {
			head = head->next;
			delete head->prev;
			head->prev = 0;
		}

		else {
			DLLNode<T> *temp;
			for (temp = head->next;
				temp != 0 && !(temp->info == val);
				temp = temp->next);
			if (temp != 0) {
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				if (temp == tail) tail = temp->prev;
				delete temp;
				tail->next = 0;
			}
		}
	}
}

template<class T>
bool DoublyLinkedList<T>::isInList(const T& val) const {
	DLLNode<T> *temp;
	for (temp = head; temp != 0 && !(temp->info == val); temp = temp->next);
	return temp != 0;
}










