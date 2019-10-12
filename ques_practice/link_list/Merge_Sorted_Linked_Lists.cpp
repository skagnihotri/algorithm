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

node* merge(node* head1, node* head2){
	if (head1==NULL){
		return head2;
	}

	if (head2==NULL){
		return head1;
	}

	node* c=NULL;

	if (head1->data < head2->data){
		c = head1;
		c->next= merge(head1->next,head2);
	} else{
		c = head2;
		c->next = merge(head1,head2->next);
	}

	return c;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		// cout<<t<<endl;
	    node* head1=NULL;
	    node* head2=NULL;
	    int n1;
	    cin>>n1;
	    while(n1--){
	        int data;
	        cin>>data;
	        insert(head1, data);
	    }
		// display(head1);
		// cout<<endl;
	    int n2;
	    cin>>n2;
	    while(n2--) {
	        int data;
	        cin>>data;
	        insert(head2, data);
	    }
		// display(head2);
		// cout<<endl;

	    node* head = merge(head1, head2);
	    display(head);
	}
	return 0;
}