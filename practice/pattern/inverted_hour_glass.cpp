#include<iostream>
using namespace std;

int main()
{
	int n,q;
	cin>>n;
	q=n;
	//upper half
	for (int i =0; i<=n; i++){
		int temp=n;
		for(int j = 0; j<=i; j++){
			cout<<temp<<" ";
			temp--;
		}

		for(int space=1; space<= 2*(n-i)-1; space++){
			cout<<" ";
		}

		temp=q;
		for(int j =0; j<=i; j++){
			if (temp==0){
				temp++;
			}
			if(temp==n+1){
				break;
			}
			cout<<temp<<" ";
			temp++;
		}
		q--;
		cout<<endl;
	}

	//lower half
	q=1;
	for (int i =1; i<=n; i++){
		int temp=n;
		for(int j = 0; j<=n-i; j++){
			cout<<temp<<" ";
			temp--;
		}

		for(int space=1; space<= 2*i-1; space++){
			cout<<" ";
		}

		temp=q;
		for(int j =0; j <= n-i; j++){
			cout<<temp<<" ";
			temp++;
		}
		q++;
		cout<<endl;
	}

	return 0;
}

// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 