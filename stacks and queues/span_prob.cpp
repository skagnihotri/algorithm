#include <bits/stdc++.h>
using namespace std;

void StockSpan(int price[], int n){
	stack<int> s;
	s.push(0);
	
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int price[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>price[i];
	}

	StockSpan(price, n);

	return 0;
}