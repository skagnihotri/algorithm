#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	bool isTerminal;
	unordered_map<int, node*> h;
	node(int data){
		this->data=data;
		this->isTerminal = false;
	}
};

class Tries
{	
	node* root;
public:
	Tries(){
		root = new node(-1);
	}

	void add(int word[], int n){
		node* temp = root;

		for (int i = n-1; i >= 0; --i){
			int ch = word[i];

			if (temp->h.count(ch)){
				temp = temp->h[ch];
			}else{
				node* child = new node(ch);
				temp->h[ch] = child;
				temp = temp->h[ch];
			}
		}
		temp->isTerminal = true;
	}

	bool search(int word[], int n){
		node* temp = root;

		int max = 0;
		int pow = 1;
		for (int i = n-1; i >= 0; --i){
			int ch = word[i];

			if (temp->h.count(1-ch))
			{	
				max = 1*pow;
				pow = pow*2;
				temp = temp->h[1-ch];
			}else{
				temp = temp->h[ch];
			}
		}
		return max;
	}
};

int main(int argc, char const *argv[])
{
	Tries t;
	int arr[] = {12,1,5,5,1,7,9,8,6,10,13};
	// int bits[32] = {0};
	// int size=0;
	for (int i = 0; i < 11; ++i)
	{
		int size = 0;
		int bits[32] = {0};
		int temp = arr[i];
		while(temp!=0){
			if (temp&1){
				bits[size] = 1;
			}else{
				bits[size] = 1;
			}
			temp = temp>>1;
			size++;
		}
		t.add(bits, size);
	}

	for (int i = 0; i < 11; ++i)
	{
		int size = 0;
		int bits[32] = {0};
		int temp = arr[i];
		int max =0;
		while(temp!=0){
			if (temp&1){
				bits[size] = 1;
			}else{
				bits[size] = 1;
			}
			size++;
		}
		int count = t.search(bits, size);
		max = (max>count) ? max : count;
	}
	
	return 0;
}