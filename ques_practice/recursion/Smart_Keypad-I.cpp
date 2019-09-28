#include <iostream>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void smart_keypad(string str, string ans){

	if (str.length() == 0) {
		cout<<ans<<endl;
		return;
	}


	char ch = str[0];
	string ros = str.substr(1);
	string key = table[ch - '0'];
	for (int i = 0; i < key.length(); ++i) {
		smart_keypad(ros, ans+key[i]);	
	}
}


int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	smart_keypad(str, "");
	return 0;
}