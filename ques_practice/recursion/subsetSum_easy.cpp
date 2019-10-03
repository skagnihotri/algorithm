#include <iostream>
using namespace std;

string SumSubset(int a[],int n, int idx, int sum,string ans){

	if(sum == 0 and idx!=0){
		return "Yes";
	}
	if (ans == "Yes"){
		return ans;
	}

	ans = SumSubset(a,n,idx+1,sum,ans);
	ans = SumSubset(a,n,idx+1,sum+a[idx],ans)
	return "No";
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    cout<<SumSubset(a,n,0,0)<<endl;
	}
	return 0;
}