#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int a,b,c;
	cin>>a>>b>>c;

	int d;

	d= b*b-4*a*c;

	if(d<0){
		cout<<"Imaginary";
	}
	else if(d==0){
		cout<<"Real and Equal"<<endl;
		cout<<(-b)/(2*a)<<" "<<(-b)/(2*a);
	}
	else{
		d = sqrt(d);
		cout<<"Real and Distinct"<<endl;
		cout<<((-b)+d)/(2*a)<<" "<<((-b)-d)/(2*a);
	}
	return 0;
}