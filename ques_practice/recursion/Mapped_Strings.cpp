#include <iostream>
using namespace std;

void mapped_string(string str, string ans){

	if (str.length() == 0){
		cout<<ans<<endl;
		return;
	}

	char ch1 = str[0];
	string ros1 = str.substr(1);
	int num1 = ch1 - '0';
	ch1 = num1 + 'A' - 1;
	mapped_string(ros1, ans+ch1);

	if (str.length() > 1) {
		char ch2 = str[1];
		int num2 = ch2 - '0';
		ch2 = num2 + 'A' -1;
		string ros2 = str.substr(2);
		if (num1*10+num2 <= 26) {
			char sec_ch = num1*10+num2 + 'A' -1;
			mapped_string(ros2, ans + sec_ch);
		}
	}
}

int main(int argc, char const *argv[]) {
	string str;
	cin>>str;

	mapped_string(str, "");

	return 0;
}