#include <bits/stdc++.h>
using namespace std;

class Merge{
public:
	int num;
	int row;
	int col;
	Merge(int num, int row, int col){
		this->num = num;
		this->row = row;
		this->col = col;
	}
};

class mycompare{
public:
	bool operator()(Merge a, Merge b){
		return a.num > b.num;
	}
};

int main()
{
	int n,k;
	cin>>k>>n;
	int arr[k][n];
	vector<int> v;
	for (int i = 0; i < k; ++i){
		for (int j = 0; j < n; ++j){
			cin>>arr[i][j];
		}
	}

	//min priority queue
	priority_queue<Merge, vector<Merge>, mycompare> pq;
	int temp = 0;
	while(temp<k){
		Merge a(arr[temp][0], temp, 0);
		pq.push(a);
		temp++;
	}

	while(pq.top().num != INT_MAX){

		Merge x = pq.top();
		pq.pop();

		int row = x.row;
		int col = x.col+1;
		v.push_back(x.num);

		if (col >= n){
			Merge a(INT_MAX, row, col+1);
			pq.push(a);
			continue;
		}

		Merge a(arr[row][col], row, col);
		pq.push(a);
	}

	for(auto i : v){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}