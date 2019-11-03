#include <bits/stdc++.h>
using namespace std;

int fact(int arr[], int n, int num_size){

	int carry = 0;
	for (int i = 0; i < num_size; ++i){
		int temp = arr[i]*n + carry;
		arr[i] = temp%10;
		carry = temp/10;
	}

	while(carry){
		arr[num_size] = carry%10;
		carry /= 10;
		num_size++;
	}

	return num_size;
}

int main(int argc, char const *argv[])
{
	int arr[2000];
	arr[0] = 1;
	int n;
	cin>>n;
	int num_size = 1;
	for (int i = 2; i <= n; ++i){
		num_size = fact(arr, i, num_size); 
	}

	for (int i = num_size-1; i >= 0; --i){
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}