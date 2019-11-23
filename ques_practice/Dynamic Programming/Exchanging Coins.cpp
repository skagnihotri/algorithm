#include <bits/stdc++.h>
using namespace std;

int max_gold(int n){

	if (n==0 or n==1){
		return n;
	}

	int ans = n;
	int q1 = INT_MIN, q2 = INT_MIN, q3 = INT_MIN;

	if (n%2==0){
		q1 = n/2 + max_gold(n/2);
	}

	if (n%3==0){
		q2 = n/3 + max_gold(2*n/3);
	}

	if (n%4==0){
		q3 = n/4 + max_gold(3*n/4);
	}

	ans = max(ans,max(q1,max(q2,q3)));
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<max_gold(n)<<endl;
	return 0;
}