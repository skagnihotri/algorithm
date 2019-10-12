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

node* merge(node* odd, node* even){

	if (odd==NULL){
		return even;
	}
	if (even==NULL){
		return odd;
	}

	node* c = NULL;
	c = odd;
	while(odd->next != NULL) {
	    odd = odd->next;
	}
	odd->next = even;
	return c;
}

int main(int argc, char const *argv[])
{	
	node* head=NULL;
	node* even=NULL;
	node* odd=NULL;
	int n;
	cin>>n;
	while(n--) {
	    int data;
	    cin>>data;
	    
	    if (data&1){
	    	insert(odd, data);
	    }else{
	    	insert(even, data);
	    }
	}

	head = merge(odd, even);
	display(head);
	return 0;
}