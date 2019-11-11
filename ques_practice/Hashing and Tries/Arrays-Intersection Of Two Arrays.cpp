#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr1[n],arr2[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>arr2[i];
	}

	int ans[n];
	int size = 0;

	unordered_map<int, int> mp;

	for (int i = 0; i < n; ++i)
	{
		if (mp.find(arr1[i]) == mp.end())
		{
			mp[arr1[i]] = 1;	
		}else{
			mp[arr1[i]]++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (mp.find(arr2[i]) != mp.end())
		{
			ans[size] = arr2[i];
			size++;
			if (mp[arr2[i]] == 1)
			{
				mp.erase(arr2[i]);
			}else{
				mp[arr2[i]]--;
			}
		}
	}
    
	sort(ans, ans+size);
	cout<<"[";
	for (int i = 0; i < size-1; ++i)
	{
		cout<<ans[i]<<", ";
	}
	cout<<ans[size-1]<<"]"<<endl;
	return 0;
}