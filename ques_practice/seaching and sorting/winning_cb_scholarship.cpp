#include <iostream>
using namespace std;

long int scholarship(long int n,long int m,long int x,long int y){
	long int start=0;
	long int end=n;
	long int ans=0;
	while(start<=end){
	    long int mid = start + (end-start)/2;
	    long int coupans = m+(n-mid)*y;
	    if ((coupans/x)>=mid){
	    	ans=mid;
	    	start = mid+1;
	    }else{
	    	end = mid-1;
	    }
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	long int n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<scholarship(n,m,x,y)<<endl;
	return 0;
}