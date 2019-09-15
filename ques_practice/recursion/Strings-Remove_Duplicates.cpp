#include <iostream>
using namespace std;


string rem_dup(string str){

	if (str.length() == 0)
	{
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);

	string result = rem_dup(ros);

	if (ch == result[0]) {
		return result;
	}else{
		return ch+result;
	}

}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	cout<<rem_dup(str);

	return 0;
}