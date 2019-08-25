#include <iostream>

using namespace std;

int main(){

	int n = 7;

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= n; col++)
		{
			(row==(n+1)/2 or col==(n+1)/2 or (row+col>=5 and row+col<=8)) ? cout<<" " : cout<<"*" ;
		}
		cout<<endl;
	}

	return 0;
}
