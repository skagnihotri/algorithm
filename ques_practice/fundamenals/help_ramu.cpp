#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	int c1,c2,c3,c4;
	while(t--) {
	    int n,m;
	    //cost input
	    cin>>c1>>c2>>c3>>c4;
	    //no. pf rikshaw and cabs
	    cin>>n>>m;
	    int rk[n],cb[m];
	    //input rikshaw
	    for(int i=0; i<n; i++){
	    	cin>>rk[i];
	    }
		//input cab
		for(int i=0; i<m; i++){
	    	cin>>cb[i];
	    }

	    int cost_rk=0,cost_cb=0,total_cost=0;
	    for(int i=0; i<n; i++){
	    	cost_rk += min(c1*rk[i],c2);
	    }
	    cost_rk = min(cost_rk, c3);

	 	for(int i=0; i<m; i++){
	    	cost_cb += min(c1*cb[i],c2);
	    }
	    cost_cb = min(cost_cb, c3);

	    total_cost = min(c4, cost_rk+cost_cb);
		cout<<total_cost<<endl;	       
	}

	return 0;
}