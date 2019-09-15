#include <iostream>
using namespace std;

string remove_pi(string str){

	if(str.length() == 0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);

	string result = remove_pi(ros);

	if(ch == 'p' and result[0] == 'i'){
		return "3.14" + result.substr(1);
	}else{
		return ch+result;
	}
}

int main(int argc, char const *argv[])
{
	cout<<"pxxxpixxpixpiixpp"<<endl;
	cout<<remove_pi("pxxxpixxpixpiixpp")<<endl;
	return 0;
}