#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	int i=0;

	int temp =a[0]-'0';
	if(temp==9){
		i++;
	}
	
	for(i; i<a.length(); i++){
		temp=a[i]- '0';
		if(temp>=5){
			temp=9-temp;
			a[i] = temp + '0';
		}
	}

	cout<<a;
	
	return 0;
}