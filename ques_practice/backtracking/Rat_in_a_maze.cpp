#include <iostream>
using namespace std;

void rat_path(char a[][1001],int b[][1001],int row,int col,int er,int ec){
	if (row==er and col==ec){
		b[row][col] = 1;
		for (int i = 0; i <row ; ++i){
			for (int j = 0; j < col; ++j){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		return;
	}
	
	if (row>er or col>ec){
		return;
	}

	if (a[row][col] == 'X'){
		return;
	}
	b[row][col] = 1;
	rat_path(a,b,row+1,col,er,ec);
	rat_path(a,b,row,col+1,er,ec);
	b[row][col] = 0;
	return;
}

int main(int argc, char const *argv[])
{
	int row,col;
	cin>>row>>col;
	char a[1001][1001];
	for (int i = 0; i <row ; ++i){
		for (int j = 0; j < col; ++j){
			cin>>a[i][j];
		}
	}
	int b[1001][1001] = {0};
	rat_path(a,b,0,0,row-1,col-1);
	return 0;
}