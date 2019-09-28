#include <iostream>
using namespace std;


int OptimalGame(int a[], int size, int curr){

if (curr >= size){
	return 0;
}

	int sum = a[curr];

	sum += OptimalGame(a, size, curr+2);

	return sum;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin>>a[i];
	}
	int odd = OptimalGame(a,n,1);
	int even = OptimalGame(a,n,0);
	int max = (odd>even)?odd:even;
	cout<<max<<endl;
	return 0;
}