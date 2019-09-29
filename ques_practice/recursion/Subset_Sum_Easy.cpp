#include <iostream>
using namespace std;

int subset_sum(int arr[], int n, int idx){

	 

}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int i = 0; i < n; ++i)
	    {
	    	cin>>arr[i];
	    }
	    if(subset_sum(arr,n,0,0)){
	    	cout<<"Yes"<<endl;
	    }else{
	    	cout<<"No";
	    }
	}

	return 0;
}