#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[5] = {1,2,3};

	int* x= a;
	for(int i=0; i<5; i++){
		cout<<*x;
		x++;
	}
	return 0;
}