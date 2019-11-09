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
		this->left = NULL;
        this->right = NULL;
	}
};

node* buildTree(node* root){

	queue<node*> q;
	int n;
	cin>>n;
	if (n == -1)
	{
		return NULL;
	}
	root = new node(n);
	q.push(root);
	while(!q.empty()){
		int c1,c2;
		cin>>c1>>c2;
		node* temp= q.front();
		if (c1 != -1){
			temp->left = new node(c1);
			q.push(temp->left);
		}

		if (c2 != -1){
			temp->right = new node(c2);
			q.push(temp->right);
		}

		q.pop();
	}
	return root;
}

void displayleft(node* root){

	if(root == NULL){
		return;
	}

	
	displayleft(root->left);
	cout<<root->data<<" ";
	return;
}

void displayright(node* root){

	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	displayright(root->right);
	return;
}

int main(int argc, char const *argv[])
{	
	node* root = NULL;
	root = buildTree(root);
	
	displayleft(root);
	displayright(root->right);
	
	return 0;
}