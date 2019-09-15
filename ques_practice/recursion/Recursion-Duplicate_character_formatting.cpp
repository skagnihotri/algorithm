#include <iostream>
using namespace std;

string char_format(string str){

	if(str.length()==0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1), temp= "*";
	string result= char_format(ros);

	if (ch == result[0]){
		return ch + temp + result;
	}else{
		return ch+result;
	}

}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;

	cout<<char_format(str);
	
	return 0;
}