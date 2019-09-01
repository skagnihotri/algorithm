#include "iostream"

using namespace std;

int fibo(int n){

	if (n==0 or n==1)
	{
		return n;
	}
	
	int a=0,b=1,sum;
	for(int i =2; i <= n; i++){
		sum = a+b;
		a= b;
		b= sum;
	}

	return sum;
}

int main(){
	int number;
	cin>>number;
	cout<<fibo(number);
	return 0;
}