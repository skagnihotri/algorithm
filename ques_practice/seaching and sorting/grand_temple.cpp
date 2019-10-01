#include <iostream>
using namespace std;

void sort(int a[],int n){
	
	for (int i = 0; i < n; ++i){
		int j= i-1;
		while(j>=0 and a[j+1]<a[j]) {
			swap(a[j+1],a[j]);
			j--;
		}		
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i]>>b[i];
	}

	sort(a,n);
	sort(b,n);
	
	int max_a=0,max_b=0;
	for (int i = 0; i < n-1; ++i){
		int diff_a = a[i+1] - a[i]-1;
		int diff_b = b[i+1] - b[i]-1;
		if (diff_a>max_a){
			max_a=diff_a;
		}
		if (diff_b>max_b){
			max_b=diff_b;
		}
	}

	cout<<max_a*max_b<<endl;
	return 0;
}