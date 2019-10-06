#include <bits/stdc++.h>
using namespace std;

bool isVallid(int arr[],int n,int painters,int ans){

	int painter =1;
	int time = 0;
	for (int i = 0; i < n; ++i){
		time += arr[i];
		if (time>ans){
			painter++;
			if (painter>painters){
				return false;
			}
			time = arr[i];
		}
	}
	if (painters==painter){
		return true;
	}
	return false;
}

int painter_prob(int arr[], int n, int painters){
	int start=0,end=0,mid;
	for (int i = 0; i < n; ++i){
		start = max(start,arr[i]);
		end += arr[i];
	}
	int ans=start;
	while(start<=end) {
	    mid = start + (end-start)/2;
	    if (isVallid(arr,n,painters,mid)){
	    	ans = mid;
	    	end = mid-1;
	    }else{
	    	start = mid+1;
	    }
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int boards,painters,time;
	cin>>boards,painters,time;
	int arr[boards];
	for (int i = 0; i < boards; ++i){
		int j;
		cin>>j;
		arr[i] = j*time;
	}
	cout<<painter_prob(arr,boards,painters)%10000003<<endl;
	return 0;
}