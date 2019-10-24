#include <bits/stdc++.h>
using namespace std;

void span(int arr[], int n){

	int span_arr[n] = {0};
	stack<int> s;
	for (int i = 0; i < n; ++i){
		
		while(!s.empty() and arr[s.top()] <= arr[i]) {
		    s.pop();
		}

		if (s.empty()){
			span_arr[i] = i+1;
		}else{
			span_arr[i] = i-s.top();
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