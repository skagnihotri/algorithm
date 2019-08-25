#include <iostream>

using namespace std;

int main(){

	int n = 5;

	for (int row = 1; row <= n; row++)
	{
		for (int space= 1; space <= 2*(row-1); space++){
			cout<<" ";
		}
		for (int col = n-row; col >= 0; col--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for (int row = 1; row < n; row++)
	{
		for (int space= 1; space <= 2*(n-row-1); space++){
			cout<<" ";
		}
		for (int col = 1; col <= row + 1; col++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}