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

void printarray(int arr[], int n, int size){

	if (n&1)
	{
		for (int i = 0; i < size; ++i)
		{
			cout<<arr[i]<<" ";
		}
		return;
	}

	for (int i = size-1; i >=0 ; --i)
	{
		cout<<arr[i]<<" ";
	}
}

void display(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int arr[100000];
	int i = 0, n = 1;
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if (temp == NULL){
			printarray(arr, n, i);
			n++;
            i = 0;
			if (q.empty()){
				break;
			}
			q.push(NULL);
		}else{
			arr[i] = temp->data;
            i++;
			if (temp->left != NULL)
			{
				q.push(temp->left);	
			}
			if (temp->right != NULL)
			{
				q.push(temp->right);	
			}
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	node* root = NULL;
	root = builtdTree(root);
	display(root);
	return 0;
}