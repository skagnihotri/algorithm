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

// void display(node* a, node* b, int k){

// 	int count = k;
// 	while(k--) {
// 	    a = a->next;
// 	}

// 	while(b!=NULL and a->data != b->data) {
// 	    a = a->next;
// 	    b = b->next;
// 	}

// 	if (b == NULL){
// 		cout<<"-1";
// 		return;
// 	}
// 	cout<<a->data;
// }

int main(int argc, char const *argv[]){
	
	node* head=NULL;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int data;
		cin>>data;
		insert(head, data);
	}
	
	return 0;
}