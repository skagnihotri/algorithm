#include <bits/stdc++.h>
using namespace std;

long int histo(long int arr[],int n){

	stack<int> s;
	long int max_area = 0;

	int i=0;

	while(i<n){
		if(s.empty() or arr[s.top()] <= arr[i]){
			s.push(i);
			i++;
		}else{

			int extractedTop = s.top();
			s.pop();

			long int currArea=0;

			if(s.empty()){
				currArea = arr[extractedTop]*i;
			}else{
				currArea = arr[extractedTop]*(i - s.top() - 1);
			}

			if(currArea>max_area){
				max_area = currArea;
			}

		}

	}

	while(!s.empty()){
		int extractedTop = s.top();
		s.pop();

		long int currArea=0;

		if(s.empty()){
			currArea = arr[extractedTop]*i;
		}else{
			currArea = arr[extractedTop]*(i - s.top() - 1);
		}

		if(currArea>max_area){
			max_area = currArea;
		}
	}

	return max_area;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long int arr[n] = {0};
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	cout<<histo(arr,n)<<endl;
	return 0;
}