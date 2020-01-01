#include <bits/stdc++.h>
using namespace std;

string answer[];
void sum_it_up(int arr[], int n, int target, int idx, int sum, string ans){
	
	
}

int main(int argc, char const *argv[]){
	int n,target;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	cin>>target;
	sum_it_up(arr,n,target,0,0,"");

	return 0;
}