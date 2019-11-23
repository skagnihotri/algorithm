#include <bits/stdc++.h>
using namespace std;

vector<string> v;
void SubSequence(string str, string ans){

	if (str.length() == 0){
		v.push_back(ans);
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);

	SubSequence(ros, ans);
	SubSequence(ros, ans+ch);

	return;
}

int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		SubSequence(str,"");
		sort(v.begin(),v.end());
		for(auto var:v){
			cout<<var<<endl;
		}
		v.clear();
	}
	return 0;
}