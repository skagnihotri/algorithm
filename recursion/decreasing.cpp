#include<iostream>
using namespace std;

void PrintDecreasing(int n){
	if(n==0){
		return;
	}

	cout<<n<<endl;
	PrintDecreasing(n-1);
	return;
}

int main(int argc, char const *argv[])
{
	PrintDecreasing(5);
	return 0;
}