#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	string str[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>str[i];
	}

	for (int i = 0; i < n; ++i)
	{	int count=0;
		for (int j = 0; j < n-i-1; ++j)
		{
			if (str[j]>str[j+1])
			{
				str[j].swap(str[j+1]);
				count++;
			}
		}
		if (count==0)
		{
			break;
		}
	}

	for (int i = 0; i < n-1; ++i)
	{
		if(str[i] == str[i+1].substr(0, str[i].length())){
			str[i].swap(str[i+1]);
		}
	}

	for (int i = 0; i < n; ++i) {
		cout<<str[i]<<endl;
	}
	return 0;
}