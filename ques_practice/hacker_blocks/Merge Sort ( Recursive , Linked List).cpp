#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	node* next;
	int data;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

void insert_list(node* &root, int data){

	if (root==NULL)
	{
		root = new node(data);
		return;
	}

	node* temp=root;
	while(temp->next!=NULL){
		temp = temp->next;
	}

	temp->next = new node(data);
	return;
}

void display(node* root){
	
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
	return;
}

node* mid_list(node* root){
	node* temp=root;
	while(temp->next!=NULL and temp->next->next!=NULL){
		root = root->next;
		temp = temp->next->next;
	}
	
	return root;
}

node* merge(node* a,node* b){

	if (a == NULL){
		return b;
	}

	if (b == NULL){
		return a;
	}

	node* c;

	if (a->data < b->data){
		c = a;
		c->next = merge(a->next, b);
	}else{
		c = b;
		c->next = merge(a, b->next);
	}

	return c;
}

node* mergeSort(node* root){
	if (root==NULL or root->next==NULL){
		return root;
	}

	node* mid = mid_list(root);
	node* a = root;
	node* b = mid->next;
	mid->next = NULL;

	a = mergeSort(a);
	b = mergeSort(b);

	node* c = merge(a,b);

	return c;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	node* root=NULL;
	for (int i = 0; i < n; ++i)
	{
		int data;
		cin>>data;
		insert_list(root,data);
	}

	root = mergeSort(root);

	display(root);
	return 0;
}