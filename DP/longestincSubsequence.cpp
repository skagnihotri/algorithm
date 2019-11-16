#include <bits/stdc++.h>
using namespace std;

int memo[7] = {0};
int longestIncSubSequence(int arr[], int n, int idx){
	if (n==idx+1)
	{
		return 1;
	}

	if (memo[idx])
	{
		return memo[idx];
	}

	int count = 0;

	if (arr[idx] < arr[idx+1])
	{
		count = longestIncSubSequence(arr, n, idx+1) +1;
	}else{
		count = longestIncSubSequence(arr, n, idx+1);
	}

	memo[idx] = count;
	memo[6] = 1;
	for (int i = 0; i < n; ++i)
	{
		cout<<memo[i]<<" ";
	}
	cout<<endl;

	return count;
}

int longestIncSubSequenceDP(int arr[], int n){
	int dp[n] = {1};
	int maxlength = 0;
	for (int i = 1; i < n; ++i)
	{	dp[i] = 1;
		for (int j = 0; j < i; ++j)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		maxlength = max(maxlength, dp[i]);
	}
	return maxlength;

}

int main(int argc, char const *argv[])
{
	int arr[] = {10,9,2,-2,10,7,8};
	int n = 7;
	cout<<longestIncSubSequenceDP(arr, n)<<endl;
	return 0;
}