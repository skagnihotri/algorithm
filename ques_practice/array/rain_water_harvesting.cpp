#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int height[n];
	for(int i=0; i<n; i++){
		cin>>height[i];
	}

	int left_height[n],right_height[n];
	int max_left=height[0],max_right=height[n-1];
	for(int i=0; i<n; i++){
		if(height[i]>max_left){
			max_left=height[i];
		}
		left_height[i] = max_left;
	}
	for(int i=n-1; i>=0; i--){
		if(height[i]>max_right){
			max_right=height[i];
		}
		right_height[i] = max_right;
	}
	int total=0;
	for(int i=0; i<n; i++){
		int mini;
		mini = min(left_height[i],right_height[i]);
		mini = mini - height[i];
		total += mini;
	}

	cout<<total;

	return 0;
}