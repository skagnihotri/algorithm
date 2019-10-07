#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		next = NULL;
	}
	
};

void insert_at_head(node*&head,int data){
	node* n = new node(data);
	n->next = head;
	head = n;
}

void display(node* head){
	node* temp=head;
	while(temp != NULL) {
	    cout<<temp->data<<"->";
	    temp = temp->next;
	}
	cout<<endl;
}

void insert_at_tail(node* &head,int data){
	if (head==NULL){
		insert_at_head(head,data);
	}

	node* tail=head;
	while(tail->next!=NULL) {
	    tail=tail->next;
	}
	node* n = new node(data);
	tail->next = n;
}

int length(node* head){
	int len=0;
	node* temp=head;
	while(temp != NULL) {
	    len++;
	    temp = temp->next;
	}	
	return len;
}

bool search(node* head,int data){
	node* temp=head;
	while(temp!=NULL) {
	    if (temp->data==data){
	    	return true;
	    }
	    temp = temp->next;
	}
	return false;
}

void insert_at_anyPlace(node* &head,int data,int pos){
	int len = length(head);
	if (pos>len){
		insert_at_tail(head,data);
		return;
	}

	if (pos==0){
		insert_at_head(head,data);
		return;
	}
	
	int count=0;
	node* temp = head;
	while(count<pos-1) {
	    temp = temp->next;
	    count++;
	}
	node* n = new node(data);
	n->next = temp->next;
	temp->next = n;
	return;
}

void deletion_at_head(node* &head){
	
	if (head==NULL){
		cout<<"link list is empty"<<endl;
		return;
	}

	node* temp = head;
	head = head->next;
	temp->next = NULL;
	delete temp;
	return;
}

void deletion_at_end(node* &head){
	node* temp=head;
	if (head==NULL){
		cout<<"link list is empty"<<endl;
		return;
	}

	if (length(head)==1){
		deletion_at_head(head);
		return;
	}

	node* p=head;
	while(temp->next!=NULL) {
	    p=temp;
	    temp = temp->next;
	}

	p->next=NULL;
	delete temp;
}

void delete_at_pos(node* &head,int pos){
	if (head==NULL){
		cout<<"link list is empty"<<endl;
		return;
	}

	if (pos==0){
		deletion_at_head(head);
		return;
	}

	if (pos==length(head)){
		deletion_at_end(head);
		return;
	}

	int count=0;
	node* temp=head;
	while(count<pos-1) {
	    temp = temp->next;
	    count++;
	}

	node* p;
	p = temp->next;
	temp->next = p->next;
	p->next = NULL;
	delete p;
	return;
}

bool search_reccursion(node* head,int data){
	if (head==NULL){
		return false;
	}

	if (head->data==data){
		return true;
	}

	return search_reccursion(head->next,data);
}

node* mid_link_list(node* head){
	
	node* p=head;
	node* temp=head;
	while(temp->next!=NULL and temp->next->next!=NULL /* important */) { 
	    temp=temp->next->next;
	    p = p->next;
	}

	return p;
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

void reverseItrative(node* &head){

	node* curr=head;
	node* pre=NULL;

	while(curr!=NULL) {
		node* n= curr->next;
		curr->next = pre;
		pre = curr;
		curr = n;
	}

	head = pre;
	return;
}


node* merge(node* a,node *b){
	if (a==NULL){
		return b;
	}

	if (b==NULL){
		return a;
	}

	node* c;

	if (a->data < b->data){
		c = a;
		c->next = merge(a->next,b);
	}else{
		c = b;
		c->next = merge(a,b->next);
	}

	return c;
}

//merge sort
node* merge_sort(node* head){

	if (head==NULL or head->next==NULL){
		return head;
	}

	node* mid = mid_link_list(head);
	node* a = head;
	node* b = mid->next;
	mid->next = NULL;
	
	a = merge_sort(a);
	b = merge_sort(b);
	
	node* c = merge(a,b);
	return c;
}

int main(int argc, char const *argv[]){
	
	node* head=NULL;
	insert_at_head(head,4);
	insert_at_head(head,3);
	insert_at_head(head,2);
	insert_at_head(head,1);

	display(head);
	cout<<length(head)<<endl;
	cout<<search(head,3)<<endl;
	cout<<search(head,9)<<endl;
	insert_at_anyPlace(head,9,2);
	display(head);
	deletion_at_end(head);
	display(head);
	
	return 0;
}