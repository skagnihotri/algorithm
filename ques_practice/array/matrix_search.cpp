#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	int a[m][n];

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}

	int x;
	cin>>x;
	int i=0,j=0,flag=0,k;
	
	for(; i<m;i++){
		if(a[i][0]==x){
			flag=1;
			cout<<"1";
			break;
		}
		else if(a[i][j]<x){
			k=i;
		}
	}

	for(; j<n; j++){
		if(a[k][j]==x){
			flag=1;
			cout<<"1";
			break;
		}
	}

	if(flag==0){
		cout<<"0";
	}

	return 0;
}
