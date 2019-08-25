#include <iostream>

using namespace std;

int main()
{
	int n = 5,p =1;

	for (int i = 1; i <= 5; ++i)
	{   i % 2 == 0 ? p =0: p=1;
		for (int j = 1; j <= i; ++j)
		{
			cout<<p; 
			// p == 1? p = 0 : p = 1; 
			p = 1 - p;
		}
		cout<<endl;
	}
	return 0;
}