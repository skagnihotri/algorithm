#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>

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

node* insertInBST(node*root,int data){
	if(root==NULL){
		node* n = new node(data);
		root = n;
		return root;
		// return new node(data);
	}

	if(data>root->data){
		root->right = insertInBST(root->right,data);
	}else{
		root->left = insertInBST(root->left,data);
	}

	return root;
}

node* construct(){
	node* root = NULL;

	int data;
	cin>>data;

	while(data!=-1){
		root = insertInBST(root,data);
		cin>>data;
	}

	return root;
}

node* sorted_array(int arr[], int n, int s, int e){

	if (s>e){
		return NULL;
	}

	

	int mid = s + (e-s)/2;
	// root = insertInBST(root,arr[mid]);
	node* root= new node(arr[mid]);

	root->left = sorted_array(arr,n,s,mid-1);
	root->right = sorted_array(arr,n,mid+1,e);

	return root;
}

// bool isBST(node* root){
// 	if (root==NULL){
// 		return true;
// 	}

// 	isBST(root->left);
// 	int temp = root->data;
// 	isBST(root->right);

// }

void preorder(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";

	preorder(root->left);
	preorder(root->right);
}

bool searchBST(node* root, int data){

	if (root==NULL){
		return false;
	}

	if (root->data == data){
		return true;
	}

	if (data > root->data){
		return searchBST(root->right,data);
	}else{
		return searchBST(root->left,data);
	}
}


int numberofBST(int n){

	if (n == 0)
	{
		return 1;
	}

	int left,right;
	for (int i = 1; i < n+1; ++i)
	{
		left = numberofBST(i-1);
		right = numberofBST(n-i);
	}
	return left*right;
}

int main(){

	node* root = construct();
	preorder(root);
	cout<<endl;

	// cout<<searchBST(root, 5)<<endl;
	// cout<<searchBST(root, 10)<<endl;

	int arr[] = {1,2,3,4,5,6,7};

	node* temp = sorted_array(arr,7,0,6);
	preorder(temp);
	cout<<endl;

	return 0;
}

// 4 2 1 3 6 5 7 -1