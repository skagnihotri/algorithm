#include <iostream>
using namespace std;

bool isVallid(int arr[],int n,int cows,int ans){
	int cow=1;
	int current=arr[0];
	for (int i = 1; i < n; ++i){
		int dis = arr[i] - current;
		if (dis>=ans){
			cow++;
			if( cow == cows ) return true;
			current = arr[i];
			// cout << current <<endl;
		}
	}
	// if ( cow != cows) return false;
	return false;
}

int agg_cow(int arr[],int n,int cows){

	int min=0;
	int max=9;
	int ans = min;
	while(min<=max) {
		int mid = min + (max-min)/2;
	    if(isVallid(arr,n,cows,mid)){
	    	ans = mid;
	    	// cout << ans << endl;
	    	min = mid+1;
	    }else{
	    	max=mid-1;
	    }
	}
	return ans;
}

int main(int argc, char const *argv[])
{	int arr[] = {1,2,4,8,9};
	cout<<agg_cow(arr,5,3)<<endl;
	return 0;
}