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

void display(node* head){

	while(head!=NULL) {
	    cout<<head->data<<" ";
	    head = head->next;
	}
	return;	
}

node* reverseReccursive(node* &head){

	if (head->next==NULL and head==NULL){
		return head;
	}

	node* newHead = reverseReccursive(head->next);
	node* currentHead = head;
	currentHead->next->next = currentHead;
	currentHead->next = NULL;	

	return newHead;
}

node* k_reverse(node* &head, int k){

	if (head==NULL){
		return head;
	}

	int i=k;
	node* temp = head;
	node* p;
	while(i--) {
		p = temp;
	    temp = temp->next;
	}
	p->next = null;
	head = reverse(head);
	p = head;
	while(p->next != NULL) {
	    p = p->next;
	}
	p->next = k_reverse(temp, k);

	return head;
}

int main(int argc, char const *argv[]){
	
	node* head=NULL;
	int n,k;
	cin>>n>>k;
	
	for (int i = 0; i < n; ++i){
		int data;
		cin>>data;
		insert(head, data);
	}

	node* c = k_reverse(head,k);
	display(c); 
	return 0;
}