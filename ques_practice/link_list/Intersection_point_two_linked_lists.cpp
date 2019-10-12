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

void display(node* a, node* b, int k){

	int count = k;
	while(k--) {
	    a = a->next;
	}

	while(b!=NULL and a->data != b->data) {
	    a = a->next;
	    b = b->next;
	}

	if (b == NULL){
		cout<<"-1";
		return;
	}
	cout<<a->data;
}

int main(int argc, char const *argv[]){
	
	node* head1=NULL;
	node* head2=NULL;
	int n1,n2;
	cin>>n1;
	for (int i = 0; i < n1; ++i){
		int data;
		cin>>data;
		insert(head1, data);
	}
	cin>>n2;
	for (int i = 0; i < n2; ++i){
		int data;
		cin>>data;
		insert(head2, data);
	}

	if (n1>=n2){
		display(head1, head2, n1-n2);
	}else{
		display(head2, head1, n2-n1);
	}
	
	return 0;
}