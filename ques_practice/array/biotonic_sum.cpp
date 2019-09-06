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
	    //input
	    for (int i = 0; i < n; ++i) {
	    	cin>>a[i];
	    }

	    int max_count=0;
	    
	    for (int i = 0; i < n; ++i) {	
	    	int count=0, flag=0, temp = a[i];
	    	
	    	for (int j = i; j < n; ++j) {	
	    		int diff = a[j]-temp; 
	    		//decreasing
	    		if(diff < 0){
	    			flag=1;
	    		}
	    		//decreasing and onced increased 
	    		if (diff > 0 and flag==1){
	    			break;
	    		}

	    		temp = a[j];
	    		count++;
	    		
	    	}
	    	
	    	if (max_count < count) {
	    		max_count = count;
	    	}

	    }

	    cout<<max_count<<endl;
	}
	
	return 0;
}