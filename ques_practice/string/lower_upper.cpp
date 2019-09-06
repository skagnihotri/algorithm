#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	ch = getchar();
	
	if(ch>='a' and ch<='z'){
		cout<<"lowercase";
	}
	else if(ch>='A' and ch<='Z'){
		cout<<"UPPERCASE";
	}
	else{
		cout<<"Invalid";
	}

	return 0;
}