#include <iostream>
using namespace std;

int main(){
//**************************************
	// int N, p_num, c_num;
	// cin>>N;

	// while(N--){
	// 	cin>>c_num;
	// 	if(c_num>p_num){
	// 		p_num = c_num;
	// 		break;
	// 	}
	// 	p_num = c_num;
	// }

	// while(N--){
	// 	cin>>c_num;
	// 	if(p_num>c_num){
	// 		cout<<"false";
	// 		exit(0);
	// 	}
	// 	p_num = c_num;
	// }

	// if(N == -1){
	// 	cout<<"true";
	// }

//****************************************
	int n, c_n, p_n,flag=0,d_flag=0;
	cin>>n;
	cin>>c_n;
	p_n=c_n;

	for(register int i=2; i<=n; i++){
		int diff;
		cin>>c_n;
		diff= c_n - p_n;
		p_n = c_n;
		
		if (diff > 0){
			flag=1;
		}

		else if(flag == 1 and diff < 0){
			d_flag =1;
			break;
		}

		else if(diff==0){
			d_flag=1;
			break;
		}

	}

	if(d_flag == 1){
		cout<<"false";
	}
	else{
		cout<<"true";
	}

	return 0;
}