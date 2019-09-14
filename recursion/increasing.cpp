#include <iostream>
using namespace std;

void PrintIncreasing(int n){
	
	if(n==1){
		cout<<n<<endl;
	}
	else{
		PrintIncreasing(n-1);
		cout<<n<<endl;
	}

}

int main(int argc, char const *argv[]) {
	
	PrintIncreasing(5);
	
	return 0;
}