#include <bits/stdc++.h>
using namespace std;

void pop(stack<int> &s, int n){
	if (n==1){
		cout<<s.top()<<" ";
		s.pop();
		return;
	}

	int x = s.top();
	s.pop();
	pop(s,n-1);
	s.push(x);
}

void Stack(int n){

	stack<int> s;

	for (int i = 0; i < n; ++i){
		s.push(i);
	}

	while(!s.empty()){
		pop(s,n);
		n--;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	Stack(n);
	return 0;
}