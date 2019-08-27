#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		int sum = 1;
		for(int spaces = 1; spaces<=2*(n-1)-i;spaces++){
			cout<<" ";
		}
		for(int j = 0; j<=i; j++){
			cout<<sum<<" ";
			sum = (sum*(i-j))/(j+1);
		}
		cout<<endl;
	}

	return 0;
}
