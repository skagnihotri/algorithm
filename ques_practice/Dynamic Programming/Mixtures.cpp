#include <bits/stdc++.h>
using namespace std;

// int memo[101] = {0};
int mixture(int arr[], int n, int idx){

	if (idx==n){
		return 0;
	}

	int ans = 0;

	int q1 = mixture()
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	cout<<mixture(arr,n,0)<<endl;
	return 0;
}