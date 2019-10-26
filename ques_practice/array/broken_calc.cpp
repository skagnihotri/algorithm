#include <bits/stdc++.h>
using namespace std;

int fact(int arr[], int n, int num_size){

	int carry = 0;
	int i;
	for (i = 0; i < num_size; ++i){
		int temp = arr[i]*i + carry;
		arr[i] = temp%10;
		carry = temp/10;
	}

	while(carry){
		arr[i] = carry%10;
		carry /= 10;
		num_size++;
	}

	return num_size;
}

int main(int argc, char const *argv[])
{
	int arr[2000] = {0};
	int n;
	cin>>n;
	int num_size = 1;
	for (int i = 1; i <= n; ++i){
		num_size = fact(arr, n, num_size); 
	}

	for (int i = num_size; i >= 0; --i){
		cout<<arr[i];
	}

	return 0;
}