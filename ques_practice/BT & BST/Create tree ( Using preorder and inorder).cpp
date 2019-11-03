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

int idx = 0;
node* built(node* root, int pre[], int in[], int s, int e){

	if (s>e)
	{
		return NULL;
	}

	if (root == NULL)
	{
		root = new node(pre[idx]);
	}

	int mid=-1;
	for (int i = 0; i < e; ++i)
	{
		if (pre[idx] == in[i])
		{
			mid = i;
			break;
		}
	}
	idx++;

	root->left = built(root->left, pre, in, s, mid-1);
	root->right = built(root->right, pre, in, mid+1, e);

	return root;
}

void display(node* root){
	if (root->left == NULL)
	{
		cout<<"END => ";
		return;
	}

	if (root->right == NULL)
	{
		cout<<"<= END"<<endl;
		return;
	}

	if (root == NULL)
	{
		return;
	}

	display(root->left);
	cout<<root->data<<" ";
	display(root->right);
	return;
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n;
	int pre[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>pre[i];
	}

	cin>>m;
	int in[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>in[i];
	}

	node* root = NULL;
	root = built(root, pre, in, 0, n-1);
	display(root);
	return 0;
}