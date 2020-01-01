#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;
		int cost[n],distance[n];

		for (int i = 0; i < n; ++i){
			cin>>cost[i];
		}

		for (int i = 0; i < n; ++i){
			cin>>distance[i];
		}

		int total_cost = 0, last_cost = cost[0];
		total_cost = distance[0]*last_cost;

		for (int i = 1; i < n; ++i){
			
			if (cost[i] < last_cost){
				last_cost = cost[i];
			}
            
			total_cost += distance[i]*last_cost;           
		}

		cout<<total_cost<<endl;
	}

	return 0;
}