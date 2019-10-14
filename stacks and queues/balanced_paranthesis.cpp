#include <bits/stdc++.h>
using namespace std;

bool ans(){
	int n;
	cin>>n;
	stack<char> s;
	while(n--) {
	    char ch;
	    cin>>ch;
	    if (ch==')'){
	 		if (s.empty()){
	 		   	return false;
	 		}
	 		s.pop();
	    }else{
	    	s.push(ch);
	    }
	}
	
	if (s.empty()){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	cout<<ans()<<endl;;

	return 0;
}