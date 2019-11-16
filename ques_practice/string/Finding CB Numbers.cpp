#include <bits/stdc++.h>
using namespace std;

bool valid(int number){

	int cb_number[] = {2,3,5,7,11,13,17,19,23,29};
	int size = 10;

	if (number==0 or number==1){
		return false;
	}

	for (int i = 0; i < size; ++i){
		if (number == cb_number[i]){
			return true;
		}
	}

	for (int i = 0; i < size; ++i){
		if (number%cb_number[i]==0){
			return false;
		}
	}
	return true;
}

bool check(bool arr[],int start,int end){

	for (int i = start; i <= end; ++i){
		if (arr[i]){
			return false;
		}
	}
	return true;
}

void mark(bool arr[],int start,int end){

	for (int i = start; i <= end; ++i){
		arr[i] = true;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool arr[n] = {false};
	int count=0;

	for (int i = 1; i <= s.length(); ++i){
		for (int j = 0; j <= s.length()-i; ++j){
			string cb = s.substr(j,i);
			if(valid(stoi(cb))){
				if (check(arr, j, j+i-1)){
					count++;
					mark(arr, j, j+i-1);
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}