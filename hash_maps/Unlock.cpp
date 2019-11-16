#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int temp=n;
	unordered_map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[temp] = i;
		temp--;
	}
	temp=n;
	for (int i = 0; i < n; ++i)
	{
		int pos_num = n - temp;
		if (mp[temp] != pos_num)
		{
			mp[arr[pos_num]] = mp[temp];
			mp[temp] = pos_num;
			temp--;
			k--;
		}
		if (k==0)
		{
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		arr[mp[i+1]] = i+1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}