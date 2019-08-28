#include <iostream>
using namespace std;

int main(){
	int num,p=1,r;
	cin>>num;
	r= (num+1)/2;
	//upper half
	for(int i=1; i<=r; i++){
		int q=p;
		for(int space = 1; space <= 2*(r-i); space++){
			cout<<" ";
		}

		while(q>0) {
		    cout<<q;
		    q--;
		}
		
		for(int space = 1; space <= 2*(i-1)-1; space++){
			cout<<" ";
		}		
		q=1;
		for(int j =1; j<=i; j++){
			if(i==1){
				break;
			}
			cout<<q;
			q++;
		}
		cout<<endl;
		p++;
	}



	//lower half
	p = p-2;
	for(int i=1; i<r; i++){
		int q=p;
		for(int space = 1; space <= 2*i; space++){
			cout<<" ";
		}

		while(q>0) {
		    cout<<q;
		    q--;
		}
		
		for(int space = 1; space <= 2*(r-i-1)-1; space++){
			cout<<" ";
		}		
		q=1;
		for(int j =1; j<=r-i; j++){
			if(i==(r-1)){
				break;
			}
			cout<<q;
			q++;
		}
		cout<<endl;
		p--;
	}


	return 0;
}

//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 

// N=7