#include <iostream>
using namespace std;

int setbit_count(int n){
	int result=0;

	while(n>0) {
	    if(n&1==1){
	    	result++;
	    }
	    n=n>>1;
	}
	
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	cout<<setbit_count(n);

	return 0;
}