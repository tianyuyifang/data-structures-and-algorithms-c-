// ****************** example using doubly linked list class *********************

#include <iostream>
#include "genDLList.h"
#include "genDLList.cpp"

using namespace std;

int main() {
	DoublyLinkedList<int> dll;

	cout << "When first initialized, the state of isEmpty is " << dll.isEmpty() << endl;
 	
 	dll.addToDLLHead(10);
 	dll.addToDLLHead(9);
 	dll.addToDLLTail(11);
 	dll.addToDLLHead(8);    // dll = {8,9,10,11};
 	cout << "Currently, the state of isEmpty is " << dll.isEmpty() << endl;
 	
 	cout << "Is 10 in list?" << endl;
 	if (dll.isInList(10)) cout << "Yes" << endl;
 	else cout << "No" << endl;

 	cout << "Is 7 in list?" << endl;
 	if (dll.isInList(7)) cout << "Yes" << endl;
 	else cout << "No" << endl;

 	dll.deleteNode(12);
 	dll.deleteNode(10);
 	
 	for (; !dll.isEmpty(); ) {    // print out all the elements and delete them one by one;
 		cout << dll.deleteFromDLLTail() << endl;
 	}
 	
 	cout << "Currently, the state of isEmpty is " << dll.isEmpty() << endl;

	return 0;
}