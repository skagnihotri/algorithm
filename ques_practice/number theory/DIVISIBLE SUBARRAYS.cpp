#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;

	while(t--){

		long long n;
		cin>>n;
		long long arr[n];

		for (long long i = 0; i < n; ++i){
			cin>>arr[i];
		}

		long long mod_arr[n] = {0};
		mod_arr[0] = 1;
		long long sum = 0;

		for (long long i = 0; i < n; ++i){
			sum = sum + arr[i];
			long long temp = sum%n + n;
			temp = temp%n;
			mod_arr[temp]++;
		}

		long long ans = 0;
		for (long long i = 0; i < n; ++i){
			long long temp = mod_arr[i]; 
			ans += (temp*(temp-1))/2;
		}

		cout<<ans<<endl;
	}

	return 0;
}