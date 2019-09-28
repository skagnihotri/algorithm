#include <iostream>
using namespace std;

string keypad[] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"} 

int rec_keypad(string str, string ans){

	if (str.length() == 0) {
		cout<<ans<<" ";
		return ++count;
	}
	int count = 0;
	char ch = str[0];
	string ros = str.substr(1);
	string key = keypad[ch-'0'];

	for (int i = 0; i < key.length(); ++i) {
		count += rec_keypad(ros, ans + key[0]);	
	}
	return count;
}


int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	cout<<rec_keypad(str, "");

	return 0;
}