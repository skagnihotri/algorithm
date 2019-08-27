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
	
	int N,flag=1,temp;
	cin>>N;

	if(flag){
		cout<<"true";
		temp = N*N;
		//even part
		if(N%2==0){
			temp = temp/4.0;
            if((temp-1+N) == (temp+1)){
			    cout<<(temp-1)<<(temp+1);
                flag=0;
            }
		}
		//odd part
		else}{
            if((N+((temp-1)/2.0)) == ((temp+1)/2.0)){
			    cout<<(temp-1)/2.0<<(temp+1)/2.0;
                flag=0;
            }
		}
	}

    else if(flag == 1){
        cout<<"-1";
    }

	return 0;
