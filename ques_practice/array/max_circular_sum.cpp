#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	    	cin>>a[i];
	    }
	    int b[2*n-1];
	    for (int i = 0, j=0; i < 2*n-1; ++i,j++)
	    {
	    	if(j==n){
	    		j=0;
	    	}
	    	b[i] = a[j];
	    }

	    int max_sum=0,sum=0, j=n,i=0;
	    while(j<=2*n-1) {
            int p=i;
            sum=0;
	    	for (p; p < j; ++p)
	    	{	
	    		sum += b[p];
	    		if(sum>max_sum){
	    			max_sum=sum;
	    		}
	   		 	if(sum<0){
	    			sum=0;
	    		}
	    	}
	    	i++;
	    	j++;
	    }
	    

	    if(max_sum>0){
	    	cout<<max_sum<<endl;
	    }
	    else{
	    	max_sum = a[0];
	    	for (int i = 1; i < n; ++i)
	    	{
	    		if(max_sum<a[i]){
	    			max_sum=a[i];
	    		}
	    	}
	    	cout<<max_sum<<endl;
	    }


	}
	return 0;
}

/* apply kadens and 
multiply every element by -1 and apply kadens and add to kadens 
and compare with normal array and find maximum sun*/