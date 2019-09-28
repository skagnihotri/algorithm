#include <iostream>
using namespace std;

int rat_maze(char arr[][4], int sol[][4], int row, int col,int er, int ec){
	if (row == er and col==ec) {
		sol[er][ec] =1;
		for (int i = 0; i <= er; ++i){
			for (int j = 0; j <= ec; ++j){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"**********************"<<endl;
		return 1;
	}

	if (row>er or col>ec){
		return 0;
	}

	if (arr[row][col] == 'X'){
		return 0;
	}

	int count=0;

	sol[col][row] = 1;

	count += rat_maze(arr,sol,row,col+1,er,ec);
	count += rat_maze(arr,sol,row+1,col,er,ec);

	sol[col][row] = 0;

	return count;
}

int main(int argc, char const *argv[])
{
	char ch[4][4] = {
		{'0','0','0','0'},
		{'0','0','0','0'},
		{'0','X','0','X'},
		{'0','0','0','0'},
		};

	int sol[4][4] = {0};
	cout<<rat_maze(ch,sol,0,0,3,3)<<endl;
	return 0;
}