#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	int max=0;

	for (int i = x; i <= y; ++i)
	{
		for (int j = x+1; j <= y; ++j)
		{
			int temp = i xor j;
			max = (max > temp) ? max : temp;
		}
	}

	cout<<max;

	return 0;
}