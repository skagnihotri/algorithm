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

int idx = 0;
node* builtTree(node* root, int pre[], int in[], int s, int e){

	if (s>e)
	{
		return NULL;
	}

	if (root == NULL)
	{
		root = new node(pre[idx]);
	}

	int mid = -1;
	for (int i = s; i <= e; ++i)
	{
		if (pre[idx] == in[i])
		{
			mid = i;
			break;
		}
	}
	idx++;
	
	root->left = builtTree(root->left, pre, in, s, mid-1);
	root->right = builtTree(root->right, pre, in, mid+1, e);

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

class largestBST
{
public:
	int max;
	int min;
	bool bst;
	int size;
	largestBST(){
		max = INT_MIN;
		min = INT_MAX;
		bst = true;
		size = 0;
	}
};

largestBST bst(node* root){
	largestBST val;
	if (root == NULL)
	{
		return val;
	}

	largestBST left = bst(root->left);
	largestBST right = bst(root->right);

	if (!left.bst or !right.bst or root->data < left.max or root->data > right.min)
	{
		val.bst = false;
		val.size = max(left.size, right.size);
		return val;
	}

	val.bst = true;
	val.size = left.size + right.size +1;

	val.min = (root->left == NULL) ? root->data : left.min;
	val.max = (root->right == NULL) ? root->data : right.max;

	return val;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int pre[n],in[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>pre[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>in[i];
	}

	node* root = NULL;
	root = builtTree(root, pre, in, 0, n-1);
	largestBST tree = bst(root);

	cout<<tree.size<<endl;
	return 0;
}