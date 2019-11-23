#include <bits/stdc++.h>
using namespace std;

class arrayInfo
{
public:
	int value;
	int idx;
	int array_no;
	arrayInfo(int value, int idx, int array_no){
		this->value=value;
		this->idx=idx;
		this->array_no=array_no;
	}
};

class compare
{
public:
	bool operator()(arrayInfo a, arrayInfo b){
		return a.value < b.value;
	}
};

int main(int argc, char const *argv[])
{
	priority_queue<arrayInfo, vector<arrayInfo>, compare> pq;

	int arr1[3][10] = {
		{1,5,7,10},
		{2,4,8},
		{3,6,9,11},
	};

	while(a.idx){

	}

	return 0;
}