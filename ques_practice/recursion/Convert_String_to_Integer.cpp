#include <iostream>
using namespace std;

int str_to_int(string str, int idx){

	if (str.length()-1 == idx)
	{
		return (str[idx] - '0');
	}

	int num_n1 = str_to_int(str, idx+1);
	int number = (str[idx] - '0')*10 + num_n1;
	return number;
}

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	cout<<str.length()<<endl;
	cout<<str_to_int(str, 0);
	return 0;
}