#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
int end;
	for(int start=0; start<n; start++){
		for(int len=1; len + start <n; len++){
			end = start + len;
			for(int i=0; i<end; i++){
				cout<<a[i];
			}
			cout<<endl;
		}
	}

	return 0;
}