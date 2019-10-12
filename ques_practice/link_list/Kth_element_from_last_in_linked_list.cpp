#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int data){
		this->data = data;
		next = NULL;
	}
};

void insert(node* &head, int data){
	
	node* n = new node(data);
	if (head==NULL){
		head = n;
		return;
	}

	node* temp = head;
	while(temp->next!=NULL) {
	    temp = temp->next;
	}

	temp->next = n;
	return;
}

void display(node* head, int k){
	node* slow=head;
	node* fast=head;

	for (int i = 0; i <= k; ++i){
		fast = fast->next;
	}

	while(fast!=NULL) {
		slow = slow->next;
	    fast = fast->next;
	}

	cout<<slow->data<<endl;
	return;
}

int main(int argc, char const *argv[])
{	
	node* head=NULL;
	while(true) {
	    int data;
	    cin>>data;
	    insert(head,data);

	    if (data == -1){
	    	break;
	    }
	}

	int k;
	cin>>k;
	display(head, k);	
	return 0;
}