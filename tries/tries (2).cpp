#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	char data;
	bool isTerminal;
	unordered_map<char, node*> h;
	node(char data){
		this->data=data;
		this->isTerminal = false;
	}
};

class Tries
{	
	node* root;
public:
	Tries(){
		root = new node('\0');
	}

	void addWord(string word){
		node* temp = root;

		for (int i = 0; i < word.length(); ++i){
			char ch = word[i];

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

	bool search(string word){
		node* temp = root;

		for (int i = 0; i < word.length(); ++i){
			char ch = word[i];

			if (temp->h.count(ch))
			{
				temp = temp->h[ch];
			}else{
				return false;
			}
		}
		return temp->isTerminal;
	}
};

int main(int argc, char const *argv[])
{
	Tries t;
	string arr[] = {"apple","ape","application", "note", "news"};
	for (int i = 0; i < 5; ++i)
	{
		t.addWord(arr[i]);
	}
	cout<<t.search("application")<<endl;
	cout<<t.search("app")<<endl;
	return 0;
}