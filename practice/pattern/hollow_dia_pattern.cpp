/*
HOLLOW DIAMOND PATTERN(PATTERN 6)
Take N (number of rows), print the following pattern (for N = 5).
      1 2 3 4 5
1     * * * * *
2     * *   * *
3     *       *

      *       *
4     * *   * *
5     * * * * *
*/

#include <iostream>
using namespace std;

int main(){

	int n,r;
	cin>>n;
	r=(n+1)/2;
	//upper half
	for(int i=1; i<=r; i++){
		for(int j=1; j<=r-i+1; j++){
			cout<<"*";
		}
		for(int space=1; space <= 2*(i-1)-1; space++){
			cout<<" ";
		}
		for(int k=1; k<=r-i+1; k++){
			if(i==1 and k==1){
				continue;
			}
			cout<<"*";
		}
		cout<<endl;
	}
	//lower half
	for(int i=1; i<=r; i++){
		if(i==1){
			continue;
		}
		else{
			for(int j=1; j<=i; j++){
				cout<<"*";
			}
			for(int space=1; space <= r-i; space++){
				cout<<" ";
			}
			for(int k=1; k<=i; k++){
				if(i==r and k==1){
					continue;
				}
				cout<<"*";
			}
			cout<<endl;
		}
	}

	return 0;
}