#include <iostream>
using namespace std;

bool isVallid(int books[], int n, int m, int mid){
	int student=1;
	int current_pages = 0;
	for (int i = 0; i < n; ++i){
		if (current_pages + books[i] > mid){
			current_pages = books[i];
			student++;
			if (student>m){
				return false;
			}
		}else{
			current_pages += books[i];
		}
	}
	return true;
}

int binary_search(int books[], int n, int m){
	int end=0,start=books[n-1],mid;
	for (int i = 0; i < n; ++i){
		end += books[i];
	}

	int final_ans = start;
	while(start<=end) {
	    mid = (start+end)/2;
	    if (isVallid(books,n,m,mid)){
	    	final_ans = mid;
	    	end = mid-1;
	    }else{
	    	start = mid+1;
	    }
	}
	return final_ans;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		int books[n];
		for (int i = 0; i < n; ++i){
			cin>>books[i];
		}
		cout<<binary_search(books, n, m)<<endl;
	}
	return 0;
}