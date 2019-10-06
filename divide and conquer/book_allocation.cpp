#include<iostream>
using namespace std;

bool isVallid(int arr[],int n,int stu, int ans){
	int current_pages=0;
	int student =1;
	for (int i = 0; i < n; ++i){
		current_pages += arr[i];
		if (current_pages>ans){
			student++;
			if (student>stu){
				return false;
			}
			current_pages = arr[i];
		}
	}
	return true;
}

int pages_allocation(int arr[],int n,int stu){
	int min_pages = 40;
	int max_pages = 100;
	int ans = max_pages;
	while(min_pages<max_pages) {
		int mid = min_pages + (max_pages- min_pages)/2;
	    if (isVallid(arr,n,stu,mid)){
	    	ans = mid;
	    	max_pages = mid-1;
	    }else{
	    	min_pages=mid+1;
	    }
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int arr[] = {10,20,30,40};
	cout<<pages_allocation(arr,4,2)<<endl;
	return 0;
}