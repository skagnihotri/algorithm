#include <bits/stdc++.h>
using namespace std;

// void form_number(long long number[], long long n){


// 	long long arr[n] = {0,1};
// 	for (long long i = 2; i < n; ++i){
// 		if (i%2==0 or i%3==0 or i%5==0){
// 			arr[i] = 1;
// 		}
// 	}

// 	long long j=1;
// 	for (long long i = 0; i < n; ++i){
// 		if (arr[i]){
// 			number[j++] = i;
// 		}
// 	}
// 	return;
// }

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	long long number[100001] = {0};
	form_number(number,100001);
	while(t--){
		long long n;
		cin>>n;
		cout<<number[n]<<endl;
	}
	
	return 0;
}