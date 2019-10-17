#include <bits/stdc++.h>
using namespace std;

bool istrue(string str){
	stack<char> s;
	for (unsigned int i = 0; i < str.length(); ++i){
		int len=0;
		if (str[i] == ')'){
			while(s.top()!='(') {
			    len++;
			    s.pop();
			}
			if (len==0){
				return true;
			}
			s.pop();
		}else{
			s.push(str[i]);
		}
	}
	return false;
}

int main(int argc, char const *argv[]){
	
	int q;
	cin>>q;
	while(q--) {
	    string str;
	    cin>>str;
	    if (istrue(str)){
	    	cout<<"Duplicate"<<endl;
	    }else{
	    	cout<<"Not Duplicates"<<endl;
	    }
	}
	return 0;
}
