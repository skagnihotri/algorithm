/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int p = n;

	for (int i = 0; i <= n ; ++i)
		{
			int temp=p;
			for(int j=0; j<i; j++){
				cout<<" ";
			}
			while(temp>=0){
				cout<<temp<<" ";
				temp--;
			}
			temp =1;
			while(temp<=p) {
			    cout<<temp<<" ";
			    temp++;
			}
			cout<<endl;
			p--;
		}	
	return 0;
}