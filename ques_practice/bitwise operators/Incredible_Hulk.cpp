#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--) {
		int num;
		cin>>num;

		int count=0;

		while(num != 0) {
			if(num&1){
				count++;
			}
			num = num>>1;
		}
		cout<<count<<endl;
	}

	return 0;
}