#include <iostream>
using namespace std;

int memo[100001];

int tilling(int n,int m){
	if (n==1){
		return n;
	}

	if(n==m){
		return 2;
	}

	if (memo[n] != -1){
		return memo[n];
	}

	int count=0;
	
	if (n>m){
		count += tilling(n-m,m) + tilling(n-1,m);
	}else{
		count += tilling(n-1,m);
	}

	memo[n] = count;
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--) {
	    int row,col;
	    cin>>row>>col;

	    for (int i = 0; i <= row; ++i){
	    		memo[i] = -1;
	    }

	    cout<<tilling(row,col)%1000000007<<endl;
	}
	return 0;
}