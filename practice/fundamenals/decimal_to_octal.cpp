#include<iostream>
#include <math.h>
using namespace std;

int decimal_to_binary(int num){
	int oct=0,remainder,i=0;
	while(num>0) {
	    remainder = num%8;
	    oct += remainder*pow(10,i);
	    num /= 8;
	    i++;
	}
	return oct;
}

int main()
{
	int N;
	cin>>N;
	cout<<decimal_to_binary(N);

	return 0;
}