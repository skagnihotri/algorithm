#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	char dummy[100];
	
	int j=0,i=0;

	for(i=0; str[i] != '\0'; i++){
		
		if(str[i] >= 'A' and str[i] <= 'Z' and i != 0){
			dummy[j] = '\0';
			cout<<dummy<<endl;
			j=0;
		}
		dummy[j] = str[i];
		j++;
	}
	dummy[j] = '\0';
	cout<<dummy;
	
	return 0;
}