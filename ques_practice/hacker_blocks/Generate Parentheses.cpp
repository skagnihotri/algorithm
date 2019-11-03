#include <bits/stdc++.h>
using namespace std;

void genereateParanthesis(int n, int open, int close, string ans){

	if (close == n)
	{
		cout<<ans<<endl;
		return;
	}

	if (close < open)
	{
		genereateParanthesis(n,open,close+1,ans+")");
	}

	if (open<n)
	{
		genereateParanthesis(n,open+1,close,ans+"(");
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	genereateParanthesis(n,0,0,"");
	return 0;
}