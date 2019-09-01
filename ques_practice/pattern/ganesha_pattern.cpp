/*
卐 GANESHA'S PATTERN
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

    1234567
1	*  ****
2	*  *
3	*  *
4	*******
5	   *  *
6	   *  *
7	****  *
*/

#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			//left up
			if(j==1 and i<=(n+1)/2){
				cout<<"*";
				continue;
			}
			//plus sign
			if(j==(n+1)/2 or i==(n+1)/2){
				cout<<"*";
				continue;
			}
			//bottom left
			if(i==n and j<=(n+1)/2){
				cout<<"*";
				continue;
			}
			//right top
			if(i==1 and j>=(n+1)/2){
				cout<<"*";
				continue;
			}
			//right down
			if(j==n and i>=(n+1)/2){
				cout<<"*";
				continue;
			}
			cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}