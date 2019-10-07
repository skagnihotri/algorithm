#include <bits/stdc++.h>
using namespace std;

bool isVallid(long int arr[],long int n,long int painters,long int ans){

	long int painter =1;
	long int time = 0;
	for (long int i = 0; i < n; ++i){
		time += arr[i];
		if (time>ans){
			painter++;
			if (painter>painters){
				return false;
			}
			time = arr[i];
		}
	}
	return true;
}

long int painter_prob(long int arr[],long int n,long int painters){
	long int start=0,end=0,mid;
	for (long int i = 0; i < n; ++i){
		start = max(start,arr[i]);
		end += arr[i];
	}
	long int ans=start;
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
	long int boards,painters,time;
	cin>>boards>>painters>>time;
	long int arr[boards];
	for (long int i = 0; i < boards; ++i){
		long int j;
		cin>>j;
		arr[i] = j*time;
	}
	cout<<painter_prob(arr,boards,painters)%10000003<<endl;
	return 0;
}