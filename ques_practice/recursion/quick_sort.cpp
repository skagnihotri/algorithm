#include <iostream>
using namespace std;

void quick_sort(int a[],int low, int high){
	if (low>=high){
		return;
	}

	int left=low;
	int right=high;
	int mid = low + (high-low)/2;
	int pivot = a[mid];

	while(left<=right) {
	    while(a[left]<pivot) {
	        left++;
	    }
	    while(a[right]>pivot) {
	        right--;
	    }

	    if (left<=right){
	    	swap(a[left++],a[right--]);
	    }
	}
	quick_sort(a,low,right);
	quick_sort(a,left,high);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}

	quick_sort(a,0,n-1);
	for (int i = 0; i < n; ++i){
		cout<<a[i]<<" ";
	}
	return 0;
}