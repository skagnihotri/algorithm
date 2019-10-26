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

node* reverseRecursive(node*&head){
	if(head->next==NULL or head==NULL){
		return head;
	}

	node* newHead = reverseRecursive(head->next);
	node* currentHead = head;
	currentHead->next->next = currentHead;
	currentHead->next = NULL;
	return newHead;
}

node* k_reverse(node* &head, int k){

	if (head==NULL){
		return head;
	}


	node* temp = head;
	node* prev = NULL;
	int i=0;
	while(i<k and temp != NULL) {
	    prev = temp;
	    temp = temp->next;
        i++;
	}
	prev->next = NULL;
	head = reverseRecursive(head);
    
    prev = head;
    while(prev->next != NULL){
	    prev = prev->next;
	}

	prev->next = k_reverse(temp, k);

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