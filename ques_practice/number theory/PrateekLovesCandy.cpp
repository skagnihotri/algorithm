#include <bits/stdc++.h>
using namespace std;

long long int a[10000010];
long long int temp[10000010];
void prime(){

	a[2] = 1;

	for (long long int i = 3; i < 10000010; i += 2){
		a[i] = 1;
	}

	for (long long int i = 3; i < 10000010; i += 2){
		if (a[i]){
			for (long long int j = i*i; j < 1000001; j += 2*i){
				a[j] = 0;
			}
		}
	}

	int k=0;
	for (long long int i = 0; i < 10000010; i++){
		if (a[i]){
			temp[k++] = i;
		}
	}	

	return;
}

int main(int argc, char const *argv[]){
	
	prime();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		cout<<temp[n-1]<<endl;
	}

	return 0;
}