#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long int n,fact=1;
	cin>>n;

	if(n==0 or n==1){
		cout<<n<<endl;
		exit(0);
	}
	else{
		unsigned long long int fact=1;
		while(n>1) {
		    fact= fact*n;
		    n--;
		}
		cout<<fact<<endl;
	}
	
	return 0;
}