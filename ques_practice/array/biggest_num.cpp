#include <iostream>
#include <algorithm>
using namespace std;

bool mycom(string a, string b){

	if (a+b > b+a){
		return true;
	}else{
		return false;
	}
}

void number(string a[], int n){
	sort(a,a+n,mycom);

	for (int i = 0; i < n; ++i){
		cout<<a[i];
	}
	cout<<endl;
	return;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		
		number(a,n);
	}
	return 0;
}