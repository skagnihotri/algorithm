#include <bits/stdc++.h>
using namespace std;

void lexi_order(int start, int end){
	if (start>end)
	{
		return;
	}
	cout<<start<<" ";

	if (start==0){
		for (int i = 1; i < 10; ++i){
			lexi_order(start*10+i,end);
		}
	}else{
		for (int i = 0; i < 10; ++i){
			lexi_order(start*10 + i, end);
		}
	}
	
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	lexi_order(0,n);
	return 0;
}