#include <iostream>
using namespace std;

int SubSequence(string str, string ans){

	if (str.length() == 0){
		cout<<ans<<" ";
		return 1;
	}

	int count = 0;
	char ch = str[0];
	string ros = str.substr(1);

	count += SubSequence(ros, ans);
	count += SubSequence(ros, ans+ch);

	return count;
}

int main(int argc, char const *argv[]) {
	string str;
	cin>>str;
	cout<<SubSequence(str,"")<<endl;
	return 0;
}