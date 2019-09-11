#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[5000001] = {0}
	a[2] = 1;
	for (int i = 3; i < 5000001; i += 2)
	{
		a[i] = 1;
	}

	for (int i = 3; i < 5000001; i += 2){
		if (a[i]){
			for (int j = i*i; j < 5000001; j += 2*i){
				a[j] = 0;
			}
		}
	}


	int count=0,x;
	cin>>x;
	for (int i = 0; i < 5000001; ++i)
	{
		if (a[i])
		{
			count++;
			if (count==x)
			{
				cout<<a[i];
				break;
			}
		}
	}

	return 0;
}