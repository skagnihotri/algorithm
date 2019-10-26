#include <bits/stdc++.h>
using namespace std;
// 1. finding cb number

// int cb(string str, int n){
// 	int count = 0;
// 	int number = 0;
// 	bool check[n] = {false};
// 	int arr[10] = {2,3,5,7,11,13,17,19,23,29};
	
// 	for (int i = 0; i < n; ++i){
// 		for (int j = 0; j < n; ++j){
// 			number = 0;
// 			for (int k = i; k <= j; ++k){
// 				int digit = str[k] - '0';
// 				number = number*10 + digit;
// 			}
// 			cout<<number<<endl;
// 		}
// 	}

// 	return count;
// }

int sanket_string(string str, int k){

	int count = 0;
	int a[2] = {0};
	int left = 0;
	int ans=0;
	for (int i = 0; i < str.length(); ++i){
		if (str[i] == 'a'){
			a[0]++;
		}else{
			a[1]++;
		}


		if (min(a[0],a[1]) <= k){
			ans = (ans>i-left) ? ans : i-left+1;
		}else{
			if (a[left]=='a'){
				a[0]--;
			}else{
				a[1]--;
			}
			left++;
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	// int n;
	// cin>>n;
	// string cb_number;
	// cin>>cb_number;
	// cout<<cb(cb_number, n)<<endl;
	int k;
	string str;
	cin>>k;
	cin>>str;
	cout<<sanket_string(str,k)<<endl;	
	return 0;
}