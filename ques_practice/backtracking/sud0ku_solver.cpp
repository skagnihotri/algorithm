#include <iostream>
using namespace std;


bool canPut(int a[9][9], int row, int col, int n, int number){
	for (int i = 0; i < n; i++){
		if (a[i][col]==number or a[row][i]==number){
			return false;
		}
	}

	int x= (row/3)*3;
	int y= (col/3)*3;
	for (int i=x;i<x+3;i++){
		for (int j=y;j<y+3;j++){
			if (a[i][j]==number){
				return false;
			}
		}
	}
	return true;
}

bool sudoku(int a[9][9],int row, int col, int n){
	if (row==n){
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			 cout<<endl;
		}
		return true;
	}
	if (col==n){
		return sudoku(a,row+1,0,n);
	}
	if (a[row][col]!=0){
		return sudoku(a,row,col+1,n);
	}

	for(int number=1;number<=9;number++){
		if (canPut(a,row,col,n,number)){
			a[row][col] = number;
			bool ros = sudoku(a,row,col+1,n);
			if (ros){
				return true;
			}
		}
	}
	a[row][col]=0;
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[9][9] = {0};
	for (int i = 0; i < n; i++){
		for (int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int row=0,col=0;
	bool ans = sudokuSolver(a,row,col,n);
	return 0;
}
