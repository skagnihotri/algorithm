#include<iostream>
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
	while(temp->next != NULL) {
	    temp = temp->next;
	}
	temp->next = n;
}

void display(node* head){
	while(head!=NULL) {
	    cout<<head->data<<" ";
	    head = head->next;
	}
	return;
}

int deleteLast(node* head){
	//head will not be null
	node* temp=NULL;
	while(head->next!=NULL) {
		temp = head;
	    head = head->next;
	}
	temp->next = NULL;
	int data = head->data;
	return data;
}

void append(node* &head, int data){
	node* n = new node(data);

	n->next = head;
	head = n;
}

int main(int argc, char const *argv[])
{
	node* head = NULL;
	int n;
	cin>>n;
	while(n--) {
		int data;
		cin>>data;
	    insert(head, data);
	}

	int k;
	cin>>k;

	while(k--) {
	    int num;
	    num = deleteLast(head);
	    append(head, num);
	}

	display(head);

	return 0;
}