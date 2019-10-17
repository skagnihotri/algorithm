#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> s;

	int n;
	cin>>n;
	int data;
	cin>>data;
	s.push();
	for (int i = 1; i < n; ++i){
		cin>>data;
		if (s.top() < data){
			s.pop();
			cout<<data;
			s.push(data);
		}
	}
	return 0;
}