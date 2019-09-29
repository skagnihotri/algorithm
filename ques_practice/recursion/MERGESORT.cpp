#include <iostream>
using namespace std;


void merge(int arr[], int start, int end){
	int temp[end-start+1];
	int mid = (start+end)/2;
	int i=start,j=mid+1,k=0;

	while(i<=mid and j<=end) {
	    if (arr[i]<arr[j]){
	    	temp[k++] = arr[i++];
	    }else {
	    	temp[k++] = arr[j++];
	    }
	}

	while(i<=mid) {
		temp[k++] = arr[i++];
	}
	while(j<=end) {
		temp[k++] = arr[j++];
	}

	k=0;
	for (int x = start; x <= end; ++x){
		arr[x] = temp[k++];
	}
}

void merge_sort(int arr[], int start, int end){

	if (start >= end){
		return;
	}

	int mid = (start+end)/2;
	merge_sort(arr, start, mid);
	merge_sort(arr, mid+1, end);
	merge(arr,start,end);
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	merge_sort(arr, 0, n-1);

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}

	return 0;
}