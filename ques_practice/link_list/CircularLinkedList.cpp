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

void display(node* head, node* temp){

	while(head!=temp) {
	    cout<<head->data<<" ";
	    head = head->next;
	}
	return;	
}

void detect(node* a){

	node* head=a;
	node* temp=NULL;
	int flag = 0;
	while(head->next!=NULL) {
	    temp = head->next;
	    while(temp!=NULL) {
	        if (temp->data == head->data){
	        	display(a,temp);
	        	return;
	        }
	        temp = temp->next;
	    }
		head = head->next;
	}
}

int main(int argc, char const *argv[]){
	
	node* head=NULL;
	int data;
	cin>>data;
	
	while(data != -1) {
	    insert(head, data);
	    cin>>data;
	}
	
	detect(head);

	return 0;
}
