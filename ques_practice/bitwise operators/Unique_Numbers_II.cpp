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

	int num_1=0,Xor=0;

	for (int i = 0; i < n; ++i)
	{
		Xor = Xor xor a[i];
	}

	int pos=0,temp=Xor;

	while(true) {
	    if(temp&1){
	    	break;
	    }
	    pos++;
	    temp = temp>>1;
	}

	for (int i = 0; i < n; ++i)
	{
		int temp = a[i]>>pos;
		if(temp & 1){
			num_1 = num_1 xor a[i];
		}
	}

	cout<<num_1<<" "<<(num_1 xor Xor);

	return 0;
}