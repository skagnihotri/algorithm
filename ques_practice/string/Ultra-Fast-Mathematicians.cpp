#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
    cin>>t;
	while(t--) {
	    string s1,s2;
	    cin>>s1>>s2;
         char ch[s1.length()+1];
        int i=0;
        for(i=0; i<s1.length(); i++){
            if(s1[i] == s2[i]){
                ch[i]='0';
            }
            else{
                ch[i]='1';
            }
        }
        ch[i] = '\0';
        cout<<ch<<endl;
	}
	return 0;
}