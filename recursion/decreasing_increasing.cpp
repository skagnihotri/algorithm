#include <iostream>

using namespace std;

void Print_Increasing_Decreasing(int n){
	if(n==0){
		return;
	}

	cout<<n<<endl;
	Print_Increasing_Decreasing(n-1);
	cout<<n<<endl;
	// Print_Increasing_Decreasing(n-1);
	return;
}
int main(int argc, char const *argv[])
{
	Print_Increasing_Decreasing(5);
	return 0;
}