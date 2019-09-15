#include <iostream>
using namespace std;


void merge(int a[], int b[], int size1, int size2){
	int total = size2+size1;
	int arr[total];
	int i=0,j=0,k=0;

	while(i<size1 and j<size2) {
	    if (a[i]<b[j]) {
	    	arr[k++] = a[i++];
	    }else{
	    	arr[k++] = b[j++];
	    }
	}

	while(i<size1) {
	    arr[k++] = a[i++];
	}
	while(j<size2) {
	    arr[k++] = b[j++];
	}

	for (int i = 0; i < total; ++i)
	{
		cout<<arr[i]<<" ";
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {1,3,5,7,9};
	int b[] = {2,6,8};
	
	merge(a,b,5,3);

	return 0;
}