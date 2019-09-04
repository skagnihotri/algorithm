#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; ++i)
	    {
	    	cin>>a[i];
	    }

	    int count,max_count=0;
	    for (int i = 0; i < n; ++i)
	    {	count=1;
	    	int diff,flag=0,temp=a[i];
	    	for (int j = i+1; j<n; ++j)
	    	{	diff=a[j]-temp; 
	    		//decreasing
	    		if(diff<=0){
	    			count++;
	    			flag=1;
	    		}
	    		else if (diff>0 and flag==1){
	    			break;
	    		}
	    		temp = a[j];
	    		count++;
	    	}
	    	if (max_count<count)
	    	{
	    		max_count=count;
	    	}
	    }
	    cout<<max_count<<endl;
	}
	return 0;
}