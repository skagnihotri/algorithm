#include <bits/stdc++.h>
using namespace std;

bool a[100000001];

void prime(){
	a[0] = a[1] = false;
	a[2] = true;

	for (unsigned int i = 3; i < 100000001; i += 2){
		a[i] = true;
	}

	for (unsigned int i = 3; i*i < 100000001; i += 2){
		if (a[i]){
			for (unsigned int j = i*i; j < 100000001; j += i){
				a[j] = false;
			}		
		}
	}	
	
	return;
}

int main(int argc, char const *argv[])
{
	
	prime();

	int count=0,x;
	cin>>x;

	for (unsigned int i = 2; i < 100000001; ++i){
		if (a[i]){
			count++;
			if (count == x){
				cout<<i<<endl;
				break;
			}
		}
	}

	return 0;
}