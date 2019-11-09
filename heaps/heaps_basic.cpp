#include <bits/stdc++.h>
using namespace std;


void upheapify(vector<int> &heap, int idx){
	if (idx == 0)
	{
		return;
	}
	int parentIdx = (idx-1)/2;
	if (heap[parentIdx] < heap[idx])
	{
		swap(heap[parentIdx], heap[idx]);

		upheapify(heap, parentIdx);
	}else{
		return;
	}
}

void downheapify(vector<int> &heap, int idx){
	int leftIdx = 2*idx +1;
	int rightIdx = 2*idx +2;

	if (leftIdx >= heap.size() and rightIdx >= heap.size()){
		return;
	}
	
	int largestIdx = idx;

	if (heap[largestIdx] < heap[leftIdx])
	{
		largestIdx = leftIdx;
	}

	if (heap[largestIdx] < heap[rightIdx])
	{
		largestIdx = rightIdx;
	}

	if (largestIdx == idx)
	{
		return;
	}

	swap(heap[largestIdx],heap[idx]);
	downheapify(heap, largestIdx);

}

void deletehigestpriority(vector<int> &heap){
	swap(heap[0], heap[heap.size()-1]);
	heap.pop_back();
	downheapify(heap, 0);
}

void insert(vector<int> &heap, int key){
	heap.push_back(key);
	upheapify(heap, heap.size()-1);
}

void display(vector<int> &heap){
	for (int i = 0; i < heap.size(); ++i)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}

void buildheap(vector<int> &heap, int idx){
	for (int i = heap.size() -1; i >=0 ; --i)
	{
		downheapify(heap, i);
	}
}

int main(int argc, char const *argv[])
{
	vector<int> arr;

	return 0;
}