// ******************** binaryHeap.cpp *******************


#include "binaryHeap.h"

MinHeap::MinHeap(int arr[], int length) : vec(length) {
	for(int i=0; i<length; i++) {
		vec[i] = arr[i];
	}
	size = length;
	Heapify();
}

MinHeap::MinHeap(const vector<int> &vector) : vec(vector) {
	size = vector.size();
	Heapify();
}

MinHeap::MinHeap() {

}

void MinHeap::Heapify() {
	for(int i=size/2 -1 ; i>=0; i--) {
		BubbleDown(i);
	}
}

void MinHeap::BubbleDown(int index) {
	int l = LeftChild(index);
	int r = RightChild(index);

	if(l >= size) return;

	int smallest = index;

	if(vec[index] > vec[l]) smallest = l;
	if(r < size && vec[r] < vec[smallest]) {
		smallest = r;
	}
	if(smallest != index) {
		int temp = vec[index];
		vec[index] = vec[smallest];
		vec[smallest] = temp;
		BubbleDown(smallest);
	}
}

void MinHeap::BubbleUp(int index) {
	if (index == 0) return;
	int p = Parent(index);
	if(vec[p] > vec[index]) {
		int temp = vec[index];
		vec[index] = vec[p];
		vec[p] = temp;
		BubbleUp(p);
	}

}

void MinHeap::Insert(int val) {
	vec.push_back(val);
	BubbleUp(size);
	size++;
}

int MinHeap::GetMin() {
	return vec[0];
}

void MinHeap::DeleteMin() {
	if (size == 0) return;
	vec[0] = vec[size-1];
	vec.pop_back();
	BubbleDown(0);
	size--;
}




