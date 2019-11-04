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

node* buildTree(node* root){

	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		int n;
		cin>>n;
		node* temp = q.front();
		q.pop();
		if (n == -1)
		{
			continue;
		}

		temp->data = n;
		q.push(temp->left);
		q.push(temp->right);
	}
	return root;
}

void display(node* root){

	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	display(root->left);
	display(root->right);
	return;
}

int main(int argc, char const *argv[])
{	
	node* root = NULL;
	root = buildTree(root);
	
	display(root);
	
	return 0;
}