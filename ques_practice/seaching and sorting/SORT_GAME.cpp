#include <bits/stdc++.h>
using namespace std;

class SORT_GAME
{
public:
	int data;
	string str;	
};

bool my_compare(SORT_GAME a, SORT_GAME b){

	if(a.data == b.data){
		return a.str<b.str;
	}

	return a.data>b.data;
}

int main(int argc, char const *argv[])
{
	int x,n;
	cin>>x>>n;
	SORT_GAME list[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>list[i].str>>list[i].data;	
	}

	sort(list, list+n, my_compare);

	for (int i = 0; i < n; ++i){

		if (list[i].data >= x){
			cout<<list[i].str<<" "<<list[i].data<<endl;
		}
	}	

	return 0;
}