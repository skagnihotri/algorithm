#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int m,n;
	cin>>m>>n;

	int a[m][n];
	for(int i=0; i<m; i++){
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}
	
	int st_r=0, end_r=m-1, st_c=0, end_c=n-1, k=0;
	while(k<m*n){
		for(int temp=st_r;temp<=end_r;temp++){
			cout<<a[temp][st_c]<<",";
			k++;
		}
		st_c++;
		for(int temp=st_c;temp<=end_c;temp++){
			cout<<a[end_r][temp]<<",";
			k++;
		}
		end_r--;
		for(int temp=end_r;temp>=st_r;temp--){
			cout<<a[temp][end_c]<<",";
			k++;
		}
		end_c--;
		for(int temp=end_c;temp>=st_c;temp--){
			cout<<a[st_r][temp]<<",";
			k++;
		}
		st_r++;
	}
	cout<<"END";
	return 0;
}