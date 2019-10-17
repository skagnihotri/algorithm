#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	stack<int> s;
	int q;
	cin>>q;
	while(q--) {
	    int n;
	    cin>>n;
	    if (n&1){
	    	if (!s.empty()){
	    		cout<<s.top()<<endl;
	    		s.pop();	
	    	}else{
	    		cout<<"No Code"<<endl;
	    	}
	    }else{
	    	int data;
	    	cin>>data;
	    	s.push(data);
	    }
	}
	return 0;
}