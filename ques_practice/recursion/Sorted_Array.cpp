#include <iostream>
using namespace std;

bool Is_Sorted(int arr[], int size, int idx){

	if(idx == size-1){
		return true;
	}

	bool ans_n1 = Is_Sorted(arr, size, idx+1);
	if(ans_n1 == 1 and arr[idx] <= arr[idx+1]){
		return true;
	}
	else{
		return false;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	bool ans = Is_Sorted(arr, n, 0);

	if (ans)
	{
		cout<<"true"<<endl;
	}
	
	else {
		cout<<"false"<<endl;
	}

	return 0;
}