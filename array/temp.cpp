#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	char str1='(';
	cin>>str;
	
	int c=0;
	for(int i=0; i < str.length()-1; i++){
		if(str[i] == ')'){
			c++;
			for(int j = i-1; j>=0; j++){
				if(str[j]== '('){
					c--;
				}
			}
			while(c--) {
			    str = str1 + str;
			}
		}
	}
	cout<<str;
	return 0;
}

// (()))))(((())))))))