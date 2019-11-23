#include <bits/stdc++.h>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string searchIn [] = {"prateek", "sneha", "deepak", "arnav", "shikha", "palak","utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void rec_seq(string str, string ans){

	if (str.length() == 0){
		for (int i = 0; i < 11; ++i){
			string value = searchIn[i];
			int len = value.length();
			for (int j = 1; j <= len; ++j){
				for (int k = 0; k <= len-j; ++k){
					if(value.substr(k,j)==ans){
						cout<<value<<endl;
						return;
					}
				}
			}
		}
		return;
	}

	char ch = str[0];
	int num = ch - '0';
	string ros = str.substr(1);
	string key = table[num];
	for(int i=0; i < key.length(); i++){
		rec_seq(ros, ans + key[i]);
	}
	return;
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	rec_seq(str,"");
	return 0;
}