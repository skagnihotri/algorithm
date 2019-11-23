#include <iostream>
using namespace std;

bool isSafe(int board[][10], int row, int col, int n){
	
	for (int i = 0; i < row; ++i) {
		if (board[i][col]) {
			return false;
		}
	}
	
	int x = row;
	int y = col;

	while(x>=0 and y>=0) {
		if (board[x][y]) {
			return false;
		}
		x--;
		y--;
	}
	
	x = row;
	y = col;
	
	while(x>=0 and y<n) {
		if (board[x][y]) {
			return false;
		}
		x--;
		y++;
	}

	return true;
}

int printnQueens(int board[][10], int row, int n){

	if (row == n) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if(board[i][j]){
					cout<<"{"<<i+1<<"-"<<j+1<<"} ";
				}
			}
		}
		cout<<"  ";
		return 1;
	}

	int count=0;

	for (int col = 0; col < n; ++col) {
		
		if (isSafe(board,row,col,n)) {
			board[row][col] = 1;

			count += printnQueens(board, row+1, n);

			board[row][col] = 0;	
		}
	}

	return count;
}
int main(int argc, char const *argv[]) {

	int n;
	cin>>n;

	int board[n][10] = {0};
	int row = 0;
	
	cout<<printnQueens(board, row, n)<<endl;
	return 0;
}