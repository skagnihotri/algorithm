#include <iostream>
using namespace std;

void sub_sequence(string str, string ans){

	if(str.length() == 0){
		cout<<ans<<endl;
		return;
	}

	char ch=str[0];
	string ros = str.substr(1);
	sub_sequence(ros, ans + ch);
	sub_sequence(ros, ans);
	return;
}

int main(int argc, char const *argv[])
{
	sub_sequence("abc", "");
	return 0;
}