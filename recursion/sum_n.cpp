#include <iostream>
using namespace std;

int sum_n(int n){

	if (n==1 or n==0)
	{
		return n;
	}

	int sum = n + sum_n(n-1);
	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	cout<<sum_n(n);
	
	return 0;
}