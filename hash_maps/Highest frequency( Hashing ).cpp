#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	unordered_map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[arr[i]]++;
	}

	int max = INT_MIN;
	int num;
	for(auto i = mp.begin(); i != mp.end(); i++){
		if (i->second >= max)
		{
			max = i->second;
			num = i->first;
		}
	}

	cout<<num<<endl;
	return 0;
}