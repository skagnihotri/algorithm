#include <bits/stdc++.h>
using namespace std;

void span(int arr[], int n){

	int span_arr[n] = {1};
	stack<int> s;
	s.push(0);
	for (int i = 1; i < n; ++i){
		
		while(arr[s.top()] <= arr[i] and !s.empty()) {
		    s.pop();
		}

		if (s.empty()){
			span_arr[i] = i+1;
		}else{
			span_arr[i] = i+1-s.top();
		}

		s.push(i);
	}

	for (int i = 0; i < n; ++i){
		cout<<span_arr[i]<<" ";
	}
	cout<<"END"<<endl;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	span(arr,n);

	return 0;
}