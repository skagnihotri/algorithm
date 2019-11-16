#include <bits/stdc++.h>
using namespace std;

int arr[8][8] = {0};
int editDistance(char s1[],int i,char s2[],int j){
	if(s1[i]=='\0'){
		return sizeof(s2) - sizeof(s1);
	}

	if(s2[j]=='\0'){
		return sizeof(s1) - sizeof(s2);
	}

    if(arr[i][j] != 0){
        return arr[i][j];
    }


	char ch1 = s1[i];
	char ch2 = s2[j];

	int result = INT_MAX;

	if(ch1==ch2){

		result = editDistance(s1,i+1,s2,j+1);

	}else{

		int del = 1 + editDistance(s1,i+1,s2,j);
		int insertion = 1 + editDistance(s1,i,s2,j+1);
		int replace = 1 + editDistance(s1,i+1,s2,j+1);

		result = min(del,min(insertion,replace));
	}
    arr[i][j] = result;

    for(int i=0; i<8;i++){
        for(int j=0;j<8;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"*****************************"<<endl;
	return result;
}

int main()
{
	char s1[] = "saturday";
	char s2[] = "sunday";

	cout<<editDistance(s1,0,s2,0)<<endl;
	return 0;
}