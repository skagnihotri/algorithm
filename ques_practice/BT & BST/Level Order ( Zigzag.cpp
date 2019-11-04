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

int main(int argc, char const *argv[])
{
	node* root = 
	return 0;
}