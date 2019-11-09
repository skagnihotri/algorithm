#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int isZero(int arr[], int n){

	unordered_map<int, int> mp;
	int sum=0;
	int size = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (mp.find(sum) != mp.end())
		{	
			if (i-mp[sum] > size)
			{
				size = i - mp[sum];
			}
		}else{
			mp[sum] = i;
		}
	}
	return size;
}

int sumK(int arr[], int n, int k){

	unordered_map<int, int> mp;
	int sum=0;
	int size = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (mp.find(sum-k) != mp.end())
		{	
			if (i-mp[sum] > size)
			{
				size = i - mp[sum];
			}
		}else{
			mp[sum] = i;
		}
	}
	return size;

}

int longestConsecutiveSubsequence(int arr[], int n){

	unordered_set<int> mp;
	int size = 0;
	for (int i = 0; i < n; ++i)
	{
		mp.insert(arr[i]);
	}

	for (int i = 0; i < n; ++i)
	{	
		if (mp.find(arr[i]-1) == mp.end())
		{
			int x = arr[i];
			while(mp.find(x) != mp.end()){
				x++;
			}
			int new_length = x - arr[i];
			size = (size>new_length) ? size : new_length;
		}
	}
	return size;	
}

int main(int argc, char const *argv[])
{
	int arr[] = {2,3,-1,-2,4,-1,-3};
	int n = 7;
	cout<<isZero(arr, n)<<endl;
	cout<<sumK(arr, n, 3)<<endl;
	cout<<longestConsecutiveSubsequence(arr, n)<<endl;
	return 0;
}