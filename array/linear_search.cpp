#include <bits/stdc++.h>
using namespace std;
//linear search
int main(){

	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int val,ans_index=-1;
	cin>>val;
	for(int i=0; i<n; i++){
		if(a[i] == val){
			ans_index = i;
			break;
		}		
	}

	if(ans_index == -1){
		cout<<"Not Found";
	}

	else{
		cout<<"Found at place : "<<ans_index;
	}

	return 0;
}