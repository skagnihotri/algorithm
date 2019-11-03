#include <iostream>
using namespace std;

int tilling(int n,int m){
	if (n==1 or n==m){
		return n;
	}

	int count=0;
	count += tilling(n-1,m);
	count += tilling(n-m,m);

	return count;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
	    int row,col;
	    cin>>row>>col;
	    cout<<tilling(row,col)<<endl;
	}
	return 0;
}