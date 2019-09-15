#include <iostream>
using namespace std;


string replace_pi(string str){

	if (str.length() == 0)
	{
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);

	string result = replace_pi(ros);

	if(ch=='p' and result[0]=='i'){
		return "3.14" + result.substr(1);
	}else{
		return ch+result;
	}

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin>>str;
		cout<<replace_pi(str);
	}
	
	return 0;
}