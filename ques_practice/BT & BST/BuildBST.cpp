#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* left = NULL;
	node* right = NULL;
	node(int data){
		this->data = data;
	}
};

node* builtTree(node* root, int arr[], int s, int e){

	if (s>e)
	{
		return NULL;
	}
	
	int mid = s + (e-s)/2;
	if (root == NULL)
	{
		root = new node(arr[mid]);
	}

	root->left = builtTree(root->left, arr, s, mid-1);
	root->right = builtTree(root->right, arr, mid+1, e);

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

	return;
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
		root = builtTree(root, arr, 0, n-1);
		display(root);
	}
	return 0;
}