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

bool same(node* root1 ,node* root2){

	if (root1 == NULL and root2==NULL)
	{
		return true;
	}

	if (root1 == NULL and root2 != NULL)
	{
		return false;
	}

	if (root1 != NULL and root2 == NULL)
	{
		return false;
	}

	int leftDecision = same(root1->left, root2->left);
	int rightDecision = same(root1->right, root2->right);

	if (leftDecision and rightDecision)
	{
		return true;
	}

	return false;
}

int main()
{
	node* root1 = NULL;
    root1 = builtdTree(root1);
    node* root2 = NULL;
    root2 = builtdTree(root2);
	// display_preorder(root1);
 	// cout<<endl;
 	// display_preorder(root2);

    bool i = same(root1,root2);
    if (i == false)
    {
    	cout<<"false"<<endl;
    }else{
    	cout<<"true"<<endl;
    }

	return 0;
}