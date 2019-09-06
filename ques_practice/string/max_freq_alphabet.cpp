#include <bits/stdc++.h>
using namespace std;

char max_freq(string s){
	int max_count=0,count=1;
	char ch;
	
    for(int i=0; s[i] != '\0'; i++){
		
		if (s[i] == s[i+1]){
			count++;
		}
		
        else{	
			if(max_count<count){
				max_count=count;
				ch = s[i];
			}
			count=1;
		}
        
	}

    return ch;
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	
	cout<<max_freq(s);
	return 0;
}