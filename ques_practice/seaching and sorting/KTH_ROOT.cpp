#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
	    long int n,k;
	    cin>>n>>k;

	    //binary search
	    long int start=1,mid,end=n,ans=0;
	    while(start<=end) {
	        mid = (start+end)/2;

	        if (pow(mid,k) == n){
	        	ans = mid;
	        	break;
	        }
	        
	        if (pow(mid,k) < n){
	        	ans = mid;
	        	start = mid+1;
	        }else{
	        	end = mid-1;
	        }

	    }
	    cout<<ans<<endl;
	}

	return 0;
}