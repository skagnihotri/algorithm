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

bool palin(node* head, node* last)
{	
	if (head==last){
		return true;
	}
	if (head->next == last){
		if (head->data == head->next->data){
			return true;
		}else{
			return false;
		}
	}

	node* temp = head;
	while(temp->next != last) {
	    temp = temp->next;
	}
    // cout<<head->data<<" "<<last->data<<endl;
	if (head->data == last->data)
	{
		return palin(head->next, temp);
	}else{
		return false;
	}
}

int main(int argc, char const *argv[]){
	
	node* head=NULL;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int data;
		cin>>data;
		insert(head, data);
	}
	node* last = head; 
	n = n-1;
	while(n--) {
	    last = last->next;
	}
	if(palin(head, last)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
	return 0;
}