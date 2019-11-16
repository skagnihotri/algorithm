#include <bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2){

	if (s1.length()==0 or s2.length()==0)
	{
		return 0;
	}

	char ch1 = s1[0];
	char ch2 = s2[0];

	string ros1 = s1.substr(1);
	string ros2 = s2.substr(1);

	int result = 0;
	if (ch1 == ch2)
	{
		result = 1 + LCS(ros1,ros2);
	}else{
		int check1 = LCS(ros1, s2);
		int check2 = LCS(s1, ros2);
		result = max(check2,check1);
	}
	return result;
}



int main(int argc, char const *argv[])
{
	
	return 0;
}