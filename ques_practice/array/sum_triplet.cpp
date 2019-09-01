#include <bits/stdc++.h>
using namespace std;

void target_triplet(int a[], int n, int target){
	sort(a,a+n);
	int left,right;
	for(int i=0; i<n; i++){
		left=i+1;
		right=n-1;
		while(left<right) {
		    if(a[i]+a[left]+a[right] == target){
		    	cout<<a[i]<<", "<<a[left]<<" and "<<a[right]<<endl;
		    	left++;
		    	right--;
		    }
		    else if(a[i]+a[left]+a[right] > target){
		    	right--;
		    }
		    else{
		    	left++;
		    }
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	target_triplet(a, n, target);
	return 0;
}