#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		int start=0,l_ans=-1,u_ans=-1,mid=0,end=n;
		while(start<=end){
		    mid = (start+end)/2;
		    if (a[mid] == x){
		    	l_ans = mid;
		    	end = mid-1;
		    }else if (a[mid] > x){
		    	end = mid-1;
		    }else {
		    	start = mid+1;
		    }
		}
		start=0;
		end=n;
		while(start<=end){
		    mid = (start+end)/2;
		    if (a[mid] == x){
		    	u_ans = mid;
		    	start = mid+1;
		    }else if (a[mid] > x){
		    	end = mid-1;
		    }else {
		    	start = mid+1;
		    }
		}

		cout<<l_ans<<" "<<u_ans<<endl;

	}
	return 0;
}