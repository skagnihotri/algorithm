#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cout<<"test cases ";
	cin>>t;

	int arr[1000001] = {0};
	arr[2] = 1;

	for (int i = 3; i < 1000001; i = i+2){
			arr[i] = 1;
	}
		
	for (int i = 3; i < 1000001; i = i+2){		
		if(arr[i]){
			for (int j = i*i; j < 1000001; j += 2*i) {
				arr[j] = 0;
			}
		}
	}

	// while(t--){
		
	// 	int a,b;
	// 	cin>>a>>b;

	// 	if(a<=1){
	// 		a=2;
	// 	}		

	// 	int count=0;
	// 	for (int i = a; i < b+1; ++i)
	// 	{
	// 		if(arr[i]){
	// 			count++;
	// 		}
	// 	}

	// 	cout<<count<<endl;
	// }

	return 0;
}