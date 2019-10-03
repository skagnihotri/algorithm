#include<iostream>
using namespace std;

int searchIn(int a[], int start, int end,int item){
	if (start>end){
		return -1;
	}

	int mid = (start+end)/2;
	if (a[mid] == item){
		return mid;
	}

	if (a[start]>a[mid]){
		if (item>a[mid] and item<=a[end]){
			return searchIn(a,mid+1,end,item);
		}else{
			return searchIn(a,start,mid-1,item);
		}
	}

	if (item<a[mid] and item>=a[start]){
		return searchIn(a,start,mid-1,item);
	}
	return searchIn(a,mid+1,end,item);
	
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int item;
	cin>>item;
	cout<<searchIn(a,0,n,item)<<endl;
	return 0;
}