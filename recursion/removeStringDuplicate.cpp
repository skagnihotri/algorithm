#include <iostream>
using namespace std;

string removeDuplicate(string str){
	
	if (str.length() == 0) {
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);
	string result = removeDuplicate(ros);

	if (ch == result[0]){
		return result;		
	}else {
		return ch + result;
	}

}

int main(int argc, char const *argv[])
{
	cout<<removeDuplicate("aabsccdbs");
	return 0;
}