#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	int temp;
	for (int i = 0; s[i] != '\0' ; ++i){	
		char ch=s[i];
        temp = ch;
		cout<<s[i];
		temp = s[i+1] - ch;
		if(s[i+1] != '\0')
			cout<<temp;
	}

	return 0;
}