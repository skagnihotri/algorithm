#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,n;
	cin>>x>>n;
	int a[n];
	string str[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>str[i]>>a[i];	
	}

	for (int i = 0; i < n; ++i)
	{	int count1=0,count2=0;
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j] < a[j+1]){
				swap(a[j], a[j+1]);
				str[j].swap(str[j+1]);
                count1++;
			}
			if(a[j]==a[j+1] and str[j] > str[j+1]){
				str[j+1].swap(str[j]);
                count2++;
			}
		}
        if(count1==0 and count2==0){
            break;
        }
	}

	for (int i = 0; a[i] >= x; ++i)
	{
		cout<<str[i]<<" "<<a[i]<<endl;	
	}	

	return 0;
}