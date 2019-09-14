#include <iostream>

using namespace std;

int Search(int arr[], int size, int idx, int data){

	if (idx == size)
	{
		return -1;
	}

	int found_pos = Search(arr, size, idx+1, data);

	if (found_pos == -1 and arr[idx] == data)
	{
		return idx;
	}
	else{
		return found_pos;
	}

}

int main(int argc, char const *argv[])
{
	int size,data;
	cin>>size;
	int arr[size];

	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}

	cin>>data;

	cout<<Search(arr, size, 0, data);

	return 0;
}