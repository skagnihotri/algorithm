#include <bits/stdc++.h>
using namespace std;

int str_to_int(string str){

	if (str.length() == 0) {
		return 0;
	}

	char ch = str[0];
	int length = str.length();
	string ros = str.substr(1);

	int result = str_to_int(ros);

	int number = pow((ch-'0'),length) + result;

	return number;
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	cout<<str_to_int(str);
	return 0;
}