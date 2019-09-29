#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int data){
	
	int start=0;
	while(start<n) {
		int mid = (n+start)/2;
	    if (arr[mid] == data) {
	    	return mid;
	    }

	    if (arr[mid] > data){
	    	n = mid-1;
	    }else {
	    	start = mid +1;
	    }
	}

	return -1;
}


int binary_search_last(int arr[], int n, int data){

	int mid;
	int start = 0;
	int flag = -1;
	while(start<n) {
	    mid = (n+start)/2;
	    if (arr[mid] == data) {
	    	flag = mid;
	    	start = mid+1;
	    }

	    if (arr[mid] > data){
	    	n = mid-1;
	    }else {
	    	start = mid +1;
	    }

	}

	// if (flag!= -1){
	// 	return flag;
	// }else{
	// 	return -1;
	// }
	return flag;
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,5,8};
	// cout<<binary_search(a,8,5);

	cout<<binary_search_last(a,8,5);

	return 0;
}