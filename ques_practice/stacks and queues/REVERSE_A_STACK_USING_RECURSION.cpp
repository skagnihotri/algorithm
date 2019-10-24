#include <bits/stdc++.h>
using namespace std;

void insert_bottom(stack<int> &s, int n){

	if (s.empty()){
		s.push(n);
		return;
	}

	int a = s.top();
	s.pop();
	insert_bottom(s, n);
	s.push(a);
}

void reverse(stack<int> &s){
	if (s.empty()){
		return;
	}

	int a = s.top();
	s.pop();
	reverse(s);
	insert_bottom(s,a);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	stack<int> s;
	while(n--) {
	    int data;
	    cin>>data;
	    s.push(data);
	}

	reverse(s);

	while(!s.empty()) {
	    cout<<s.top()<<endl;
	    s.pop();
	}
	return 0;
}