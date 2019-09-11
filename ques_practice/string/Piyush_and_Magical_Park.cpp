#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int row, col, k, s;
	cin>>row>>col>>k>>s;
	char a[row][col];

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cin>>a[i][j];
		}
	}

	for (int i = 0; i < row; ++i) {
		if(s<=0){
			break;
		}
		for (int j = 0; j < col; ++j) {
			s--;
            if(a[i][j] == '#'){
                break;
			}
			else if(a[i][j] == '*'){
				s += 5;
			}
			else if(a[i][j] == '.'){
				s -= 2;
			}
		}
        s++;
	}

	if(s>=k){
		cout<<"Yes"<<endl;
		cout<<s;
	}
	else{
		cout<<"No";
	}
    
	return 0;
}