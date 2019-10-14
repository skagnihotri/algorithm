#include<iostream>
using namespace std;

int start_node(int petrol[],int dist[], int n){

	int start = -1;
	int sur =0;
	int def = 0;
	int flag=0;
	for (int i = 0; i < n; ++i){
		if (petrol[i] - dist[i]>=0){
			sur += petrol[i] - dist[i];
		}else{
			def += dist[i] - petrol[i];
		}
		if (sur > 0 and flag==0){
			start = petrol[i];
			flag=1;
		}
	}
	return start;
}

int main(int argc, char const *argv[])
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {3,4,5,1,2};
	cout<<start_node(arr1,arr2,5)<<endl;
	return 0;
}