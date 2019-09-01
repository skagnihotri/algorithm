#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		int min_index= i;
		for(int j=i; j<n; j++){
			if(a[min_index]> a[j]){
				min_index=j;
			}
		}
		int temp;
		temp = a[i];
		a[i] = a[min_index];
		a[min_index] = temp;
	}

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}