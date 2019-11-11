#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;
int arr[10000] = {0};

void no_of_steps(int n, int count){
	
	if (n==1)
	{
		if (count < ans)
		{
			ans = count;
		}
		return;
	}

	if (n%3==0)
	{
		no_of_steps(n/3, count+1);
	}

	if (n%2==0)
	{
		no_of_steps(n/2, count+1);
	}

	no_of_steps(n-1,count+1);
	
	return;
}

void PuredpToOne(int n){

	int arr[n+1] = {0};
	int c1,c2,c3;
	
	for (int i = 2; i <= n ; ++i)
	{
		c1=c2=c3 = INT_MAX;
		if (i%3==0)
		{
			c1 = 1 + arr[i/3];
		}

		if (i%2==0)
		{
			c2 = 1 + arr[i/2];
		}

		c3 = 1 + arr[i-1];

		arr[i] = min(c1,min(c2,c3));
	}

	cout<<arr[n]<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	// no_of_steps(n,0);
	// cout<<ans<<endl;
	// cout<<i<<endl;
	PuredpToOne(n);
	return 0;
}