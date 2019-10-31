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
		left = right = NULL;
	}
	~node();
};

// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

// 								true10true
// 				true20true							true30true
// 	false40false		false50false	false60false		false73false

node* builtdTree(node* root){

	int data;
	cin>>data;
	if (root == NULL)
	{	
		node* root = new node(data);
	}
	
	string s;
	cin>>s;
	if (s == "false"){
		return NULL;
	}

	root->left = builtdTree(root->left);
	cin>>s;
	if (s == "false"){
		return NULL;
	}
	root->right = builtdTree(root->right);

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
	node* root = builtdTree(root);
	display_preorder(root);
	return 0;
}

