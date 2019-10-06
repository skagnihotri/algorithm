#include <iostream>
using namespace std;

bool isValid(int arr[],int n,int k,int time,int ans){
	int no_painter=1;
	int current_sum = 0;
	for (int i = 0; i < n; ++i){
		if (current_sum+arr[i]*time>ans){
			current_sum = arr[i];
			no_painter++;
			if (no_painter>k){
				return false;
			}
		}else{
			current_sum += arr[i];
		}
	}
	return true;
}

int painter_problem(int arr[],int n,int start,int end,int k,int time=1){
	if (start>end){
		return start +(end-start)/2;
	}

	int mid = start + (end-start)/2;
	if (isValid(arr,n,k,time,mid)){
		return painter_problem(arr,n,start,mid-1,k,time);
	}else{
		return painter_problem(arr,n,mid+1,end,k,time);
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {10,20,30,40};
	int min = 40;
	int max = 100;
	int painter =2;
	cout<<painter_problem(arr,4,min,max,painter)<<endl;
	return 0;
}