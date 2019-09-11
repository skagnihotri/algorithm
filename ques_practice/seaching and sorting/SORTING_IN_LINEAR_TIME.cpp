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

	int zeros=0,ones=0,twos=n-1;

	while(ones<=twos) {
		int temp;
		if(a[ones]== 0){
			temp = a[zeros];
			a[zeros] = a[ones];
			a[ones] = temp;
			zeros++;
			ones++;
		}
		else if(a[ones]==1){
			ones++;
		}
		else{
			temp = a[twos];
			a[twos] = a[ones];
			a[ones] = temp;
			twos--;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<endl;
	}


	return 0;
}