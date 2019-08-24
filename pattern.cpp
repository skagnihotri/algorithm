#include <iostream>

using namespace std;

int main()
{
	int n=5, p=1;

	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout<<p;
			p++;			/* code */
		}
		cout<<endl;
	}
	return 0;
}