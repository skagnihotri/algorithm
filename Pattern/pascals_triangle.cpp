#include<iostream>

using namespace std;


int main(){

	int n = 10;

	for(int i = 1; i<=n; i++){
		int sum = 1;
		for(int spaces = 1; spaces<=n-i;spaces++){
			cout<<" ";
		}
		for(int j = 0; j<i; j++){
			cout<<sum<<" ";
			sum = (sum*(i-j))/(j+1);
		}
		cout<<endl;
	}

	return 0;
}