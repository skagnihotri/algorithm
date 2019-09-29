#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int data){
	int start=0;
	int mid;

	while(start <= n) {
	    mid = (start+n)/2;

	    if (arr[mid] == data){
	    	return mid;
	    }
        if(arr[mid]>data){
	    	n=mid-1;
	    }else{
	    	start = mid+1;
	    }
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int data;
	cin>>data;
	cout<<binary_search(arr,n-1,data)<<endl;
	return 0;
}