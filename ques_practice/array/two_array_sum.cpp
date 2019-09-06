#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}

	int temp = (m>n)?m:n;
	int c[temp];

	int carry=0;
	int i=m-1,j=n-1, k=temp-1;
	while(i>=0 and j>=0) {
	    int num = a[j] + b[i];
	    
	    if(num >= 10){
	    	c[k] = num-10 + carry;
	    	carry = 1;
	    	i--;
	    	j--;
	    	k--;
	    }
	    else{
	    	c[k] = num + carry;
	    	carry=0;
	    	i--;
	    	j--;
	    	k--;
	    }

	}

	if(i>0){
		while(i>=0) {
			
			if(carry==1){
				c[i]=b[i]+1;
				carry=0;	
			}
			else{
				c[i]=b[i];
			}

		    i--;
		}
	}
	else{
		while(j>=0) {
			
			if(carry==1){
				c[j]=b[j]+1;
				carry=0;	
			}
			else{
				c[j]=b[j];
			}
			
		    j--;
		}
	}

	for(int i=0; i<temp; i++){
		cout<<c[i]<<", ";
	}
	cout<<"END";
	return 0;
}