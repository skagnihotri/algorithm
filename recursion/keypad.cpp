#include <iostream>
using namespace std;

string code[] = {" ", ",", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// str 123

void keypad_print(string str, string ans){

	if (str.length() == 0) {
		cout<<ans<<endl;
		return;
	}


	char ch = str[0];
	string ros = str.substr(1);
	int ch_int = ch - '0';
	string key = code[ch_int];

	while(key.length() > 0) {
	    char ch1 = key[0];
	    keypad_print(ros, ans + ch1);
	    key = key.substr(1);
	}

}

int main(int argc, char const *argv[])
{
	keypad_print("234", "");
	return 0;
}