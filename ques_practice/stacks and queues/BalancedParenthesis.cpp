#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str){

	stack<char> s;
	for (unsigned int i = 0; i < str.length(); ++i){
		if (str[i] == ')'){
			if (s.empty()){
				return false;
			}else{
				s.pop();
			}
		}else{
			s.push(str[i]);
		}
	}
	if (s.empty()){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	if (isBalanced(str)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

	return 0;
}