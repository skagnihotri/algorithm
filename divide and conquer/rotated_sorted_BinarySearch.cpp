#include <iostream>
using namespace std;

int rotated_BinarySearch(int arr[], int start, int e, int data){
	
	if (start>e){
		return -1;
	}

	int mid = (e+start)/2;

	if (arr[mid]==data){
		return mid;
	}
	if (arr[mid]<arr[start]){
		if (data>arr[mid] and data<=arr[e]){
			return rotated_BinarySearch(arr,mid+1,e,data);
		}else{
			return rotated_BinarySearch(arr,start,mid-1,data);
		}
	}

	if (data>=arr[start] and data<arr[mid]){
		return rotated_BinarySearch(arr,start,mid-1,data);
	}

	return rotated_BinarySearch(arr,mid+1,e,data);
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,6,7,1,2,3,4};
	cout<<"ANS:-"<<endl;
	cout<<rotated_BinarySearch(arr,0,7,2)<<endl;
	cout<<rotated_BinarySearch(arr,0,7,9);
	return 0;
}