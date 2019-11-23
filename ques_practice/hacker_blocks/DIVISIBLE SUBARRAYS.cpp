#include <bits/stdc++.h>
using namespace std;

int count_item = 0;
void DIVISIBLE_SUBARRAYS(int arr[], int n, int start, int end){

	if (end == n){
		return;
	}

	if (start>end){
		DIVISIBLE_SUBARRAYS(arr,n,0,end+1);	
	}else{
		int sum = 0;
		for (int i = start; i <= end; ++i){
			sum += arr[i];
		}
		
		if (sum%n == 0){
			count_item++;
		}

		DIVISIBLE_SUBARRAYS(arr,n,start+1,end);
	}
	return;
}

int main(int argc, char const *argv[])
{	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		count_item=0;
		DIVISIBLE_SUBARRAYS(arr,n,0,0);
		cout<<count_item<<endl;
	}
	return 0;
}