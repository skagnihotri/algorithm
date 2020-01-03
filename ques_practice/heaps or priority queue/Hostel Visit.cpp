#include <bits/stdc++.h>
using namespace std;

class Hostel
{
public:
	long long x;
	long long y;
	Hostel(long long x, long long y){
		this->x = x;
		this->y = y;
	}
	
	long long distace(){
		return x*x+y*y;
	}
};

class distance_compare
{
public:
	bool operator()(Hostel a, Hostel b){
		return a.distace() < b.distace();
	}
};

int main()
{
	long long q,k;
	cin>>q>>k;
	priority_queue<Hostel, vector<Hostel>, distance_compare> pq; //max heap

	long long n,temp=0;
	while(temp<k){
		cin>>n;
		long long x,y;
		cin>>x>>y;
		Hostel h(x,y);
		pq.push(h);
		temp++;
	}
	q -= k; 
	while(q--){
		cin>>n;

		if (n==1){
			long long x,y;
			cin>>x>>y;
			Hostel a(x,y);
			Hostel b = pq.top();

			if (b.distace() > a.distace()){
				pq.pop();
				pq.push(a);
			}

		}else{
			Hostel b = pq.top();
			cout<<b.distace()<<endl;
		}
	}
	return 0;
}