#include <iostream>
using namespace std;

string larger(string str){

	if (str.length() == 0)
	{
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);
	string result = larger(ros);
	if (ch > result[0]) {
		return ch+result;
	} else{
		return result.substr(0,1)+ch+result.substr(1);
	}
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	cout<<larger(str);

	return 0;
}