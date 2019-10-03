#include <iostream>
using namespace std;

void SortStalls(int a[], int n){
	for (int i = 1; i < n; ++i){
		int j = i;
		while(j>0 and a[j]<a[j-1]) {
		    swap(a[j],a[j-1]);
		}
	}
	return;
}

bool isVallid(int stalls[],int n, int c, int ans){
	int current_stall = stalls[0];
	int cows = 1;
	for (int i = 0; i < n; ++i){
		if (current_stall - stalls[i] > ans){
			current_stall = stalls[i-1];
			i = i-2;
			cows++;
			if (cows > c){
				return false;
			}
		}
	}
	return true;
}

int cowSearch(int stalls[],int n,int c){
	int start=stalls[0],end=stalls[n-1],mid;
	int final_ans=start;
	while(start<=end){
		int mid = (start+end)/2;
		if (isVallid(stalls,n,c,mid)){
			final_ans = mid;
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	return final_ans;
}

int main(int argc, char const *argv[])
{
	int n,c;
	cin>>n>>c;
	int stalls[n];
	for (int i = 0; i < n; ++i){
		cin>>stalls[i];
	}
	SortStalls(stalls,n);
	cout<<cowSearch(stalls,n,c)<<endl;
	return 0;
}