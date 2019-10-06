#include <bits/stdc++.h>
using namespace std;

bool isVallid(int stalls[],int n, int c, int ans){
	int current_stall = stalls[0];
	int cows = 1;
	for (int i = 1; i < n; ++i){
		int diff = stalls[i]-current_stall;
		if (diff >= ans){
			cows++;
			current_stall = stalls[i];
			if (cows==c){
				return true;
			}
		}
	}
	return false;
}

int cowSearch(int stalls[],int n,int c){
	int start=stalls[0];
	int end=stalls[n-1];
	int final_ans=start;
	while(start<=end){
		int mid = start + (end-start)/2;
		if (isVallid(stalls,n,c,mid)){
			final_ans = mid;
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	return final_ans;
}

int main(int argc, char const *argv[])
{
	int n,c;
	cin>>n>>c;
	int stalls[n];
	for (int i = 0; i < n; ++i){
		cin>>stalls[i];
	}
	sort(stalls,stalls+n);
	cout<<cowSearch(stalls,n,c)<<endl;
	return 0;
}