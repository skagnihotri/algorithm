#include <bits/stdc++.h>
using namespace std;

void sum_to_target(int a[], int n, int target){
    sort(a, a+n); //sorting
    int left=0,right=n-1,flag=0;
    while(right>left) {
        if(a[left]+a[right]>target){
        	right--;
        }
        else if(a[left]+a[right]<target){
        	left++;
        }
        else if(a[left]+a[right]==target){
        	if(flag==1 and (a[left]==a[right])){
                break;
        	}
            else if(a[left]==a[right]){
                cout<<a[left]<<" and "<<a[right]<<endl;
        	    right--;
             	left++;
                flag=1;
            }
            else{
                cout<<a[left]<<" and "<<a[right]<<endl;
        	    right--;
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

	sum_to_target(a, n, target);
	return 0;
} 