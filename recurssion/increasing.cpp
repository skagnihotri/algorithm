#include <iostream>
using namespace std;

void inc(int n){
	
	if(n==1){
		cout<<n<<endl;
	}
	else{
		inc(n-1);
		cout<<n<<endl;
	}
	
}

int main(int argc, char const *argv[]) {
	
	inc(5);
	
	return 0;
}