#include <iostream>
using namespace std;

int rotated_BinarySearch(int arr[], int start, int n, int data){
	

	// int start = 0;
	// int mid = (n+start)/2;

	// if (arr[mid] == data)
	// {
	// 	return mid;
	// }
	// if (data >= arr[start] and data<= arr[mid]){
	// 	return rotated_BinarySearch(arr, start, mid, data)
	// }
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,6,7,1,2,3,4};
	cout<<rotated_BinarySearch(arr,7,1);
	return 0;
}