#include <iostream>
using namespace std;

int count = 0;
bool subset_sum(int arr[], int n, int idx, int sum){

	if (idx == n){
		if(sum == 0){
		    count++;
		}

		if (count>1){
			return true;
		}
		return false;
	}
	
	return subset_sum(arr, n, idx+1, sum) or subset_sum(arr, n, idx+1, sum+arr[idx]);
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

	    // int idx=0, sum=0;
	    count = 0;
	    if(subset_sum(arr,n,0,0)){
	    	cout<<"Yes"<<endl;
	    }else{
	    	cout<<"No"<<endl;
	    }
	}
	return 0;
}