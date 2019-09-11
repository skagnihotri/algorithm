#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,n;
	cin>>x>>n;
	int ans=1;
	while(n != 0) {
	    if(n&1){
	    	ans *= x;
	    }
	    x *= x;
	    n = n>>1;
	}

	cout<<ans;
	
	return 0;
}