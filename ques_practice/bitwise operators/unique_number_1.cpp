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

	int num=0;

	for (int i = 0; i < n; ++i)
	{
		num = num xor a[i];
	}

	cout<<num;

	return 0;
}