#include <bits/stdc++.h>
using namespace std;

int SanketString(string s, int k){

	int ans = 0;
	int check[2] = {0};
	int left = 0;
	int count=0;
	for (int i = 0; i < s.length(); ++i)
	{
		char ch = s[i];
		check[ch - 'a']++;

		if (min(check[0],check[1]) > k)
		{
			check[s[left] - 'a']--;
			left++;
		}else{
			count = i-left+1;
		}

		if (count>ans)
		{
			ans = count;
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	cout<<SanketString(s, k)<<endl;
	return 0;
}