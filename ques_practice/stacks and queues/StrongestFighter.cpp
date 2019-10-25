#include <bits/stdc++.h>
using namespace std;

void SlidingWindow(int a[], int n, int k){
	deque<int> q(k);

	int i=0;
	for (i = 0; i < k; ++i){
		while(!q.empty() and a[i] > a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}

	for (i; i < n; ++i){
		cout<<a[q.front()]<<" ";

		while(!q.empty() and q.front() <= i-k){
			q.pop_front();
		}

		while(!q.empty() and a[i] >= a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}

	cout<<a[q.front()]<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int fighter_strength[n];
	for (int i = 0; i < n; ++i){
		cin>>fighter_strength[i];
	}
	int k;
	cin>>k;
	SlidingWindow(fighter_strength,n,k);
	return 0;
}