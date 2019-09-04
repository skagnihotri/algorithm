#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==0 or a==1){
			a=2;
		}
		int flag=0,count=0;
		for(int i=a; i<=b; i++){
			flag=0;
			for(int j=2; j<=sqrt(float(i)); j++){
				if(i%j==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}