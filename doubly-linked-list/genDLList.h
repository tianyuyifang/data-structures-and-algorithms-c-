#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

template<class T>
class DLLNode{
public:
	DLLNode() {
		next = prev = 0;
	}

	DLLNode(const T& val, DLLNode *n = 0, DLLNode *p = 0) {
		info = val;
		next = n;
		prev = p;
	}

	T info;
	DLLNode *next, *prev;
};

template<class T>
class DoublyLinkedList {
public:
	DoublyLinkedList() {
		head = tail = 0;
	}

	~DoublyLinkedList();

	bool isEmpty() {
		return head == 0;
	}

	void addToDLLHead(const T&);

	void addToDLLTail(const T&);

	T deleteFromDLLHead(); // delete the head and return its info;

	T deleteFromDLLTail(); // delete the tail and return its info;

	void deleteNode(const T&);

	bool isInList(const T&) const;

private:
	DLLNode<T> *head, *tail;
};

#endif