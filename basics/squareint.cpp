#include<iostream>

using namespace std;


void sqrt(int n){

	for (int i= 1; i<= n; i++){
		if(i*i > n){
			cout<<i-1;
			break;
		}
	}
}


int main()
{
	int number;
	cin>>number;
	sqrt(number);
	return 0;
}