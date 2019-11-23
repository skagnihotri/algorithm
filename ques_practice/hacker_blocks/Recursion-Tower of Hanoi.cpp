#include <iostream>
using namespace std;

int count = 0;
void TowerHanoi(int n, string src,string des,string helper){
	if(n==0){
		return;
	}

	TowerHanoi(n-1,src,helper,des);
	cout<<"Move "<<n<<"th disc from "<<src<<" to "<<des<<endl;
	count++;
	TowerHanoi(n-1,helper,des,src);
	return;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	TowerHanoi(n,"T1","T2","T3");
	cout<<count<<endl;
	return 0;
}