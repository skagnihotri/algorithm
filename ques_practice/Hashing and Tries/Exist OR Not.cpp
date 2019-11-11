#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		unordered_map<int,int> mp;
		for (int i = 0; i < n; ++i)
		{
			mp[arr[i]] = arr[i];
		}
		int num;
		cin>>num;
		for (int i = 0; i < num; ++i)
		{
			int query;
			cin>>query;
			if (mp.find(query) != mp.end())
			{
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}