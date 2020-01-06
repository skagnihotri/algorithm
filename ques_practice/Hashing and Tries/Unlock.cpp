#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];

	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	unordered_map<int, int> mp;
	for (int i = 0; i < n; ++i){
		mp[arr[i]] = i;
	}

	int current_num = n;

	while(k and current_num>0){

		int best_pos = n - current_num;
		if (best_pos != mp[current_num]){
			int temp = arr[best_pos];
			arr[best_pos] = current_num;
			arr[mp[current_num]] = temp;
			mp[temp] = mp[current_num];
			mp[current_num] = best_pos;
			k--;
		}

		current_num--;
	}

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}