#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int sum =0,max_sum=0;
		for(int i=0; i<n; i++){
			sum += a[i];
			if(sum>max_sum){
				max_sum = sum;
			}
			else if(sum <0){
				sum=0;
			}
		}
		cout<<max_sum<<endl;
	}
	return 0;
}