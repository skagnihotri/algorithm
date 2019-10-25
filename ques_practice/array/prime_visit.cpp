#include <bits/stdc++.h>
using namespace std;

bool arr[10000000];

void primeSieve(){

	arr[2] = true;
	arr[0] = arr[1] = false;

	for (unsigned int i = 3; i < 10000000; i+=2){
		arr[i] = true;
	}

	for (unsigned int i = 3; i*i < 10000000; i+=2){
		
		if (arr[i]){
			for (unsigned int j = i*i; j < 10000000; j += i){
				arr[j] = false;
			}
		}

	}

	return;
}

void prime(int a, int b){

	int count=0;
	for (int i = a; i <= b; ++i)
	{
		if(arr[i]){
			count++;
		}
	}

	cout<<count<<endl;

	return;
}

int main(int argc, char const *argv[])
{
	
	primeSieve();
	
	int t;
	cin>>t;
	while(t--){
		
		int a,b;
		cin>>a>>b;
		prime(a, b);

	}

	return 0;
}