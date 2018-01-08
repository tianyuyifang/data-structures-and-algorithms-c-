// ******************** example using binary heap *****************

#include <iostream>
#include "binaryHeap.h"

using namespace std;

int main() {
	int arr[] = {12,6,23,8,54,37,2,9,53};
	MinHeap minh(arr, 9);
	cout << "the size is " << minh.get_size() << endl;
	int size = minh.get_size();
	for(int i=0; i<size; i++) {
		cout << minh.GetMin() << " ";
		minh.DeleteMin();
	}
	return 0;
}