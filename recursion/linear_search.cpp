#include <iostream>
using namespace std;


// int linearSearch(int arr[], int size, int idx, int data){

// 	if(idx == size){
// 		return -1;
// 	}


// 	if(arr[idx] == data){
// 		return idx;
// 	}
// 	int indexFound = linearSearch(arr, size, idx+1, data);
// 	return indexFound;

// }

int linearSearch(int arr[], int size, int idx, int data){

	if(idx == size){
		return -1;
	}

	int indexFound = linearSearch(arr, size, idx+1, data);
	if(arr[idx] == data and indexFound == -1){
		return idx;
	}

	return indexFound;
	
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5,6,4,8};
	int n=8;
	int data = 4;
	cout<<linearSearch(arr, n, 0, data);
	return 0;
}