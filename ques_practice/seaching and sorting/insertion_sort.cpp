#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n-1; ++i){	
		
		for (int j = i+1; j > 0; --j){
			if(a[j] < a[j-1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
			else{
				break;
			}
		}	
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<endl;
	}	
	return 0;
}