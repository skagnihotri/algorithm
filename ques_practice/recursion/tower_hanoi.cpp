#include <iostream>
using namespace std;

void TowerHanoi(int n,char src,char des,char helper){
	if(n==0){
		return;
	}

	TowerHanoi(n-1,src,helper,des);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des<<endl;
	TowerHanoi(n-1,helper,des,src);
	return;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	TowerHanoi(n,'A','B','C');
	return 0;
}