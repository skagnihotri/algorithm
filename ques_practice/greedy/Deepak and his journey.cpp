#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){

		long long n;
		cin>>n;
		long long cost[n],distance[n];

		for (long long i = 0; i < n; ++i){
			cin>>cost[i];
		}

		for (long long i = 0; i < n; ++i){
			cin>>distance[i];
		}

		long long total_cost = 0, last_cost = cost[0];
		total_cost = distance[0]*last_cost;

		for (long long i = 1; i < n; ++i){
			
			if (cost[i] < last_cost){
				last_cost = cost[i];
			}
            
			total_cost += distance[i]*last_cost;           
		}

		cout<<total_cost<<endl;
	}

	return 0;
}