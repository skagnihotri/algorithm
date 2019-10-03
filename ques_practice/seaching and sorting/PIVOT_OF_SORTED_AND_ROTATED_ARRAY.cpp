#include <iostream>
using namespace std;

int pivot(int a[], int e, int s){
	if (s>e){
		return -1;
	}

	int mid=(e+s)/2;
	if (a[mid]>a[mid+1]){
		return mid;
	}
	if (a[mid]<a[mid-1]){
		return mid-1;
	}
	int ans;
	if (a[mid] >= a[s]){
		ans = pivot(a,e,mid+1);
	}
	if (a[mid]<a[e]){
		ans = pivot(a,mid-1,s);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	cout<<pivot(a,n-1,0)<<endl;
	return 0;
}
