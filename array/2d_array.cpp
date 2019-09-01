#include <iostream>
using namespace std;

int main(){

	int row,col;
	cin>>row>>col;
	
	int** a = new int* [row];

	for(int i=0; i<col; i++){
		a[i] = new int [col];
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>a[i][j];
		}
	}

	for(int i=0; i<row; i++){
		if(i%2==0){
			for(int j=0; j<col; j++){
				cout<<a[i][j]<<"\t";
			}
		}
		else{
			for(int j=col-1; j>=0; j--){
				cout<<a[i][j]<<"\t";
			}
		}
		cout<<endl;
	}

	for(int i=0; i<row; i++){
		delete[] a[i];
	}
	
	delete[] a;

	return 0;
}