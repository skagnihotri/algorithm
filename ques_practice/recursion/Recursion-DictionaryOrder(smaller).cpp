#include<iostream>
using namespace std;

void smaller(string str,string mod_str,string ans){

	if (mod_str.length() == 0){
		if (ans<str){
			cout<<ans<<endl;
			return;
		}
		return;
	}

	for (int i = 0; i < mod_str.length(); ++i){
		char ch = mod_str[i];
		string ros = mod_str.substr(0,i) + mod_str.substr(i+1);
		smaller(str,ros,ans+ch);
	}
	return;
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	smaller(str,str,"");
	return 0;
}