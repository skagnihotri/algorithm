#include <iostream>
using namespace std;

int matrix_reach(int start_row, int start_col, int end_row, int end_col){

	if (start_row==end_row and start_col==end_col) {
		return 1;
	}
	if (start_row>end_row or start_col>end_col){
		return 0;
	}

	int count = 0;

	count += matrix_reach(start_row +1, start_col, end_row, end_col);
	count += matrix_reach(start_row, start_col +1, end_row, end_col);
	return count;
}

int main(int argc, char const *argv[])
{
	cout<<matrix_reach(0,0,2,2)<<endl;
	return 0;
}