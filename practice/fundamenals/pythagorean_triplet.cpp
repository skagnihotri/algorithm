/*
PYTHAGORAS TRIPLET
Given a number N (denoting one of the legs of the triangle), 
Print its Pythagoras pair in increasing order if they exist. 
Otherwise, print "-1". 
*/

#include <iostream>
using namespace std;

int main()
{
	
	long int N,a,b,c,temp=-1;
	cin>>N;

	if(N>2){

		//even part
		if(N%2==0){
			a = N;
			b = N*N/4 - 1;
			c = N*N/4 + 1;
            if( (a*a + b*b) == c*c){
			    cout<<b<<" "<<c;
            }
            else{
            	cout<<temp;
            }
		}

		//odd part
		else{
			a = (N*N - 1)/2;
			b = N;
			c = (N*N + 1)/2;
            if((a*a + b*b) == c*c){
			    cout<<a<<" "<<c;
            }
            else{
            	cout<<temp;
            }
		}
	}

    else{
 		cout<<temp;	
    }
	return 0;
}