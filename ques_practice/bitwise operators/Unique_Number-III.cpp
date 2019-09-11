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

	int num[32] = {0};

	for (int i = 0; i < n; ++i)
	{
		int j=0,temp=a[i];

		while(temp != 0) {
		    num[j] += temp&1;
		    j++;
		    temp = temp>>1;
		}
	}

	int unique_num=0,mul=1;
	for (int i = 0; i < 31; ++i)
	{
		num[i] = num[i] % 3;
		unique_num += num[i]*mul;
		mul = mul<<1;
	}

	cout<<unique_num;

	return 0;
}