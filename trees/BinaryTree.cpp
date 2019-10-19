#include <iostream>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right= NULL;
	}
};

node* buildTree(node* root){
	int data;
	cin>>data;

	if(data ==-1){
		return NULL;
	}

	if(root==NULL){
		node* n = new node(data);
		root=n;
	}

	root->left = buildTree(root->left);
	root->right = buildTree(root->right);

	return root;
}

void preorder(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";

	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){

	if (root==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}

void postorder(node* root){

	if (root==NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";

}

int countNodes(node* root){

	if (root==NULL){
		return 0;
	}

	if (root->left==NULL and root->right == NULL){
		return 1;
	}

	int count = 1;

	count += countNodes(root->left);
	count += countNodes(root->right);

	return count;
}

int sumNodes(node* root){

	if (root==NULL){
		return 0;
	}
	if (root->left==NULL and root->right == NULL)
	{
		return root->data;
	}

	int sum = root->data;

	sum += sumNodes(root->left);
	sum += sumNodes(root->right);

	return sum;
}

int main(){

	node* root = NULL;

	root = buildTree(root);
	preorder(root);
	cout<<endl;
	//inorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;

	// cout<<countNodes(root)<<endl;
	cout<<sumNodes(root)<<endl;

	return 0;
}

// 4 2 1 -1 -1 3 -1 -1 6 5 -1 -1 7 -1 -1