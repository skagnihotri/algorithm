#include <bits/stdc++.h>
using namespace std;

bool ans(string str){
	stack<char>	s;
	for (int i = 0; i < str.length(); ++i){
		char ch = str[i];
		if (ch != ')'){
			s.push(ch);
		}else{
			int len = 0;
			while(s.top() != '(') {
			    s.pop();
			    len++;
			}
			if (len==0){
				return true;
			}
			s.pop();
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{	
	string s;
	cin>>s;
	cout<<ans(s)<<endl;;

	return 0;
}