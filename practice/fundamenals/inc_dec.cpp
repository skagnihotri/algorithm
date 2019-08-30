#include <iostream>
using namespace std;

int main(){

	int N, p_num, c_num;
	cin>>N;

	while(N--){
		cin>>c_num;
		if(c_num>p_num){
			p_num = c_num;
			break;
		}
		p_num = c_num;
	}

	while(N--){
		cin>>c_num;
		if(p_num>c_num){
			cout<<"false";
			exit(0);
		}
		p_num = c_num;
	}

	if(N == -1){
		cout<<"true";
	}
	return 0;
}