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
	int i=0,j=0,flag=0,pre,cur;
	cur = a[i][j];
	while(i>=0 and i<m and j>=0 and j<n) {
	    if(a[i][j]==x){
	    	flag=1;
	    	break;
	    }
	    else if(a[i][j]<x){
	    	i++;
	    	pre = cur;
	    	cur = a[i][j];
	    }
	    else if(a[i][j]>x){
	    	i--;
	    	j++;
	    	pre=cur;
	    	cur=a[i][j];
	    }

	    if(x<pre and x<cur){
	    	break;
	    }
	}

	if(flag==0){
		cout<<"0";
	}
	else{
		cout<<"1";
	}

	return 0;
}