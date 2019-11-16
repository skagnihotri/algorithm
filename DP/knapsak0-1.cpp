#include <bits/stdc++.h>
using namespace std;

int knapsack(int arr[], int idx, int capacity[], int n, int maximum, int current){
	if (idx == n)
	{
		return 0;
	}

	int count1= 0; 
	int count2 = 0;

	if (current+arr[idx] < maximum)
	{
		count1 = capacity[idx] + knapsack(arr, idx+1,capacity, n, maximum, current+arr[idx]);	
	}
	
	count2 = knapsack(arr, idx+1,capacity, n, maximum, current);

	return max(count1, count2);
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,4,6,3};
	int capacity[] = {60,40,70,40};
	int n = 4;
	cout<<knapsack(arr, 0, capacity, n, 7, 0);
	return 0;
}