#include <bits/stdc++.h>
using namespace std;

int KthMAX(int arr[], int n, int k){

	priority_queue<int , vector<int>, greater<int>> pq;

	int j=0;
	for (int i = 0; i < n; ++i)
	{
		if (j<k)
		{
			pq.push(arr[i]);
			j++;
		}

		if (j==k and pq.top()<arr[i])
		{
			pq.pop();
			pq.push(arr[i]);
		}
	}
	return pq.top();
}

int main(int argc, char const *argv[])
{
	int arr[] = {3,2,1,5,6,7,0};
	cout<<KthMAX(arr,7,2)<<endl;
	return 0;
}