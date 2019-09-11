#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	while(q--) {
	    int a,b;
	    cin>>a>>b;
	    int count=0;

	    for (int i = a; i <= b; ++i)
	    {
	    	int num=i;
	    	while(num != 0) {
				if(num&1){
					count++;
				}
				num = num>>1;
	    	}
	    }

	    cout<<count<<endl;
	}

	return 0;
}