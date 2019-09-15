#include <iostream>
using namespace std;

int optimised_power(int n, int b){

	if (b==0)
	{
		return 1;
	}

	int powerby2 = optimised_power(n, b/2);
	if(b%2==0){	
		int power = powerby2*powerby2;
		return power;
	}
	else{
		int power = powerby2*powerby2*n;
		return power;
	}
}

int main(int argc, char const *argv[])
{
	cout<<optimised_power(2,8)<<endl;
	cout<<optimised_power(2,9)<<endl;
	return 0;
}