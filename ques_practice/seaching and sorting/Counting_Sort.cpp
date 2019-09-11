#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],max=0,arr[1000001]= {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		arr[a[i]]++;
		max = (max>a[i]) ? max : a[i];
	}

	for (int i = 0; i < max+2; ++i)
	{
		while(arr[i]) {
		    cout<<i<<" ";
		    arr[i]--;
		}
	}


	return 0;
}