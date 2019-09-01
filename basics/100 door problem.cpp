#include <iostream>

using namespace std;

int main(){
	int flag;

	for(int i = 1; i<101; i++){
		flag = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				flag += 1;
			}
		}
		if(flag % 2 != 0){
			cout<<i<<endl;
		}
	}

	return 0;
}