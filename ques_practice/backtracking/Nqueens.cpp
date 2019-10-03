#include <iostream>
using namespace std;

bool isSafe(int board[][11], int row,int n, int col){
	int i=row,j=col;
	for (int i = 0; i < row; ++i){
		if (board[i][col]){
			return false;
		}
	}
	while(i>=0 and j>=0) {
	    if (board[i--][j--]){
	    	return false;
	    }
	}
	i=row;
	j=col;
	while(i>=0 and j<n) {
	    if (board[i--][j++]){
	    	return false;
	    }
	}
	return true;
}


int Nqueens(int board[][11], int row, int n){
	if (row==n){
		return 1;
	}
	int count =0;
	for (int i = 0; i < n; ++i){
		if (isSafe(board,row,n,i)){
			board[row][i] = 1;
			count += Nqueens(board,row+1,n);
			board[row][i] = 0;
		}
	}
	return count;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int board[11][11] = {0};
	cout<<Nqueens(board,0,n);
	return 0;
}