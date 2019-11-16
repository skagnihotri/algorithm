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

void display_mid(node* root){
	node* temp=root;
	while(temp->next!=NULL and temp->next->next!=NULL){
		root = root->next;
		temp = temp->next->next;
	}
	cout<<root->data<<endl;
	return;
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

	display_mid(root);
	return 0;
}