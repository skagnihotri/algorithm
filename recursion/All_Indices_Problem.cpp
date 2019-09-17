#include <iostream>
using namespace std;

void index_value(int a[], int size, int idx, int data){
	if(idx == size){
		return;
	}

	if(data == a[idx]){
		cout<<idx<<" ";
	}
	index_value( a, size, idx+1, data);
	return;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],data;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>data;

	index_value(a,n,0,data);

	return 0;
}