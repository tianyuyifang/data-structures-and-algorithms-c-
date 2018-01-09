// **********************  example using priority queue *************************

#include <iostream>
#include "pqList.h"

using namespace std;

int main() {
	Priority_Queue pq;
	pq.insert(2,10);
	pq.insert(3,10);
	pq.insert(4,12);
	pq.insert(5,11);
	pq.insert(6,10);
	pq.insert(7,9);
	pq.display();
	
	return 0;
}
