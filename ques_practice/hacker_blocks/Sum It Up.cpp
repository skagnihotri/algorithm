#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
void sum_it_up(int arr[], int n, int target, int idx, int sum,int ans,vector<int> &v){
	
	if (sum == target){
		if (mp.find(ans) == mp.end()){
			mp[ans]++;
			for(auto i:v){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		return;
	}

	if (idx==n or sum>target){
		return;
	}

	v.push_back(arr[idx]);
	sum_it_up(arr,n,target,idx+1,sum+arr[idx],ans*10+arr[idx],v);
	v.pop_back();
	sum_it_up(arr,n,target,idx+1,sum,ans,v);
	
	return;
}

int main(int argc, char const *argv[]){
	int n,target;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	cin>>target;
	sort(arr,arr+n);
	vector<int> v;
	sum_it_up(arr,n,target,0,0,0,v);
	return 0;
}