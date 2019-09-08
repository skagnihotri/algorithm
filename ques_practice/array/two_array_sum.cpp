#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n;
	int a[n];
	//first array
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	//second array
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}

	int temp = (m>n) ? m : n ;
	temp = temp +1;
	int c[temp] = {0}; //initialized with all zeros

	int i=n-1, j=m-1, k=temp-1,carry=0; 
	while(i>=0 and j>=0) {
	    int temp = a[i]+b[j]+carry;
	    if(temp >= 10){
	    	c[k] = temp - 10;
	    	carry = 1;
	    }
	    else{
	    	c[k] = temp;
	    	carry = 0;
	    }
        
	    i--; j--; k--;
	}
	
	if(i>=0){
		while(i>=0) {
		    if (a[i] + carry >= 10) {
		    	c[k] = a[i] + carry - 10;
		    	carry = 1;
		    }
		    else{
		    	c[k] = a[i] + carry;
		    	carry = 0;
		    }
		    i--; k--;
		}
	}

	if(j >= 0){
		while(j>=0) {
		    if (b[j] + carry >= 10) {
		    	c[k] = b[j] + carry - 10;
		    	carry = 1;
		    }
		    else{
		    	c[k] = b[j] + carry;
		    	carry = 0;
		    }
		    j--; k--;
		}
	}	

	if(carry == 1) {
		c[k] = 1;
		carry = 0;
        k--;
	}

	for (int i = k+1; i < temp; ++i)
	{
		cout<<c[i]<<", ";
	}

	cout<<"END";
	return 0;
}