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

node* buildTree(node* root, int data){

	if (root == NULL)
	{
		root = new node(data);
		return root;
	}

	if (root->data > data)
	{
		root->left = buildTree(root->left, data);
	}

	if (root->data < data)
	{
		root->right = buildTree(root->right, data);
	}

	return root;
}

void display(node* root){

	if (root == NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	display(root->left);
	display(root->right);
}

void displayRange(node* root, int k1, int k2){
	if (root == NULL)
	{
		return;
	}

	displayRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2)
	{
		cout<<root->data<<" ";
	}
	displayRange(root->right, k1, k2);
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		node* root = NULL;
		for (int i = 0; i < n; ++i)
		{
			root = buildTree(root,arr[i]);	
		}
		int k1,k2;
		cin>>k1>>k2;
		cout<<"# Preorder : ";
		display(root);
		cout<<endl;
		cout<<"# Nodes within range are : ";
		displayRange(root, k1, k2);
		cout<<endl;
	}

	return 0;
}