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

int max_level = 0;
void displayleft(node* root, int level){

	if(root == NULL){
		return;
	}

    if (level > max_level)
    {
    	cout<<root->data<<" ";
    	max_level = level;	
    }
	displayleft(root->left, level+1);
	displayleft(root->right, level+1);
	
	return;
}

int main(int argc, char const *argv[])
{	
	node* root = NULL;
	root = buildTree(root);
	
	displayleft(root, 1);
	
	return 0;
}