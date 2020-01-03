#include <bits/stdc++.h>
using namespace std;

map<string,int> mp;
void distint_permutation(string str, string ans){

	if (str.length() == 0){
		mp[ans]++;
		return;
	}

	for (int i = 0; i < str.length(); ++i){
		char ch = str[i];
		string ros = str.substr(0,i) + str.substr(i+1);
		distint_permutation(ros, ch+ans);
	}
}

int main()
{
	string str;
	cin>>str;
	distint_permutation(str, "");

	for(auto i : mp){
		cout<<i.first<<endl;
	}
	return 0;
}