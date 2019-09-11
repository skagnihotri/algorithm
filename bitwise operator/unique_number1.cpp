

//for 2 unique value
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,1,2,3,3,4,4,5,5,7};
	int n=10;
	
	int Xor = a[0];

	for (int i = 1; i < n; ++i)
	{
		Xor = Xor^a[i];
	}

	int count_firstbit=0,temp_Xor=Xor;

	while(true){
		if(temp_Xor&1){
			break;
		}
		count_firstbit++;
		temp_Xor = temp_Xor>>1;
	}
	
	int num=0;
	for (int i = 0; i < n; ++i)
	{	int temp = a[i]>>count_firstbit;
		if(temp&1){
			num = num ^ a[i];
		}
	}

	cout<<num<<" and "<<(Xor^num);

	return 0;
}
