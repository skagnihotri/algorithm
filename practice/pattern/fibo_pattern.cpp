#include <iostream>
using namespace std;

int main(){
	int num,before=0, a=0, b=1, after;
	cin>>num;

	for (int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			if(before == 0 or before == 1){
				cout<<before;
				++before;
			}
			else{
				after=a+b;
				a=b;
				b=after;
				cout<<after;
			}
		}
		cout<<endl;
	}
	
	return 0;
}