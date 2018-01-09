// ******************** use a linked list  ***************

#include <iostream>
#include "intSLList.h"

using namespace std;

int main() {
	IntSLList sll;
	
	cout << "When first initialized, the state of isEmpty is " << sll.isEmpty() << endl;
 	
 	sll.addToHead(10);
 	sll.addToHead(9);
 	sll.addToTail(11);
 	sll.addToHead(8);    // sll = {8,9,10,11};
 	cout << "Currently, the state of isEmpty is " << sll.isEmpty() << endl;
 	cout << "Is 9 in list?" << endl;
 	if (sll.isInList(10)) cout << "Yes" << endl;
 	else cout << "No" << endl;

 	sll.deleteNode(12);
 	sll.deleteNode(10);
 	
 	for (; !sll.isEmpty(); ) {    // print out all the elements and delete them one by one;
 		cout << sll.deleteFromTail() << endl;
 	}
 	
 	cout << "Currently, the state of isEmpty is " << sll.isEmpty() << endl;
 	cout << "Is 9 in list?" << endl;
 	if (sll.isInList(10)) cout << "Yes" << endl;
 	else cout << "No" << endl;
	return 0;
}
