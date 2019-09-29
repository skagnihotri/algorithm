#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int data){
	int mid = n/2;
	int start=0;
	while(start<n) {
	    if (arr[mid] == data) {
	    	return mid;
	    }

	    if (arr[mid] > data){
	    	n=mid;
	    }else {
	    	start = mid +1;
	    }
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,7,8};
	cout<<binary_search(a,8,5);
	return 0;
}