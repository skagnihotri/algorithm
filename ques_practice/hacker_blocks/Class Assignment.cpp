#include <bits/stdc++.h>
using namespace std;

void fibonacci(long long fibo[], int n){

	for (int i = 2; i < n; ++i){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	return;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	long long fibo[50]={0,1,1,2};
	fibonacci(fibo, 50);
	int i=1;
	while(t--){
		int n;
		cin>>n;
		if (n == 0){
			cout<<"#"<<i<<" : "<<fibo[n]<<endl;
		}else{
			cout<<"#"<<i<<" : "<<fibo[n+2]<<endl;
		}
		i++;
	}
	return 0;
}