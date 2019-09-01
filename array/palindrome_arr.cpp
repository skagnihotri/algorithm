#include <bits/stdc++.h>
using namespace std;

int main(){

	int N;
	cin>>N;
	int a[N];
	for (int i=0; i<N; i++){
		cin>>a[i];
	}

	bool flag=true;

	for(int i=0; i< N/2; i++){
		if(a[i] != a[N-i-1]){
			cout<<"false";
			flag=false;
			break;
		}
	}

	if (flag==true){
		cout<<"true";
	}
	return 0;
}