

//for 1 unique value
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,7};
	int n=16;

	int a[32] = {0};
	int i=0;
	while(i != n) {
	    int j=0;
	    while(arr[i] != 0) {
	        int temp= arr[i]&1;
	        a[j] += temp;
	        j++;
	        arr[i] = arr[i]>>1;
	    }
	    i++;
	}
	
	int num=0,mul=1;
	for(int i=0 ; i<n; i++){
		a[i] = a[i] % 3;
		num += a[i]*mul;
		mul = mul<<1;
	}
	cout<<num;
	return 0;
}