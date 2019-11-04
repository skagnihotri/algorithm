#include <bits/stdc++.h>
using namespace std;				

class node
{
public:
	int data;
	node* left;
	node* right;
	node(int data){
		this->data = data;
		left = NULL;
        right = NULL;
	}
};

node* builtdTree(node* root){

	int data;
	cin>>data;
	if (root == NULL)
	{	
		node* n = new node(data);
        root = n;
	}
	
	string s;
	cin>>s;
	if (s == "true"){
		root->left = builtdTree(root->left);
	}

	cin>>s;
	if (s == "true"){
		root->right = builtdTree(root->right);
	}

	return root;
}

void display_preorder(node* root){

	if (root==NULL){
		return;
	}
	cout<<root->data<<" ";
	display_preorder(root->left);
	display_preorder(root->right);
	return;
}

class balance
{
public:
	bool isbal;
	int height;
	balance(){
		isbal = true;
		height = 0;
	}
};

balance balTree(node* root){

	balance val;
	if (root == NULL)
	{
		return val;
	}

	balance left = balTree(root->left);
	balance right = balTree(root->right);

	if (left.isbal and right.isbal)
	{
		int diff = abs(left.height - right.height);
		if (diff>1)
		{
			val.isbal = false;
			return val;
		}

		val.isbal = true;
		val.height = max(left.height,right.height) + 1;
		return val;
	}

	val.isbal = false;
	return val;
}

int main(int argc, char const *argv[])
{
	node* root = NULL;
	root = builtdTree(root);

	balance tree = balTree(root);

	if (tree.isbal)
	{
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}