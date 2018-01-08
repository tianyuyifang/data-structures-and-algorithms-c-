// ********************** binaryHeap.h ********************


#include <vector>
#include <cmath>

using namespace std;

#ifndef BINARY_HEAP
#define BINARY_HEAP

class MinHeap {
private:
	vector<int> vec;
	int size;
	void BubbleDown(int index);
	void BubbleUp(int index);
	void Heapify();
	int Parent(int index) const {
		return (int)((index-1)/2);
	}
	int LeftChild(int index) const {
		return 2*index + 1;
	}
	int RightChild(int index) const {
		return 2*index + 2;
	}
public:
	MinHeap(int arr[], int length);
	MinHeap(const vector<int> &vector);
	MinHeap();
	int get_size() const {return size;}

	void Insert(int val);
	int GetMin();
	void DeleteMin();
};

#endif