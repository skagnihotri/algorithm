#include <bits/stdc++.h>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right= NULL;
	}
};

node* buildTree(node* root){
	int data;
	cin>>data;

	if(data ==-1){
		return NULL;
	}

	if(root==NULL){
		node* n = new node(data);
		root=n;
	}

	root->left = buildTree(root->left);
	root->right = buildTree(root->right);

	return root;
}

void preorder(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";

	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){

	if (root==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}

void postorder(node* root){

	if (root==NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";

}

int countNodes(node* root){

	if (root==NULL){
		return 0;
	}

	if (root->left==NULL and root->right == NULL){
		return 1;
	}

	int count = 1;

	count += countNodes(root->left);
	count += countNodes(root->right);

	return count;
}

int sumNodes(node* root){

	if (root==NULL){
		return 0;
	}
	if (root->left==NULL and root->right == NULL)
	{
		return root->data;
	}

	int sum = root->data;

	sum += sumNodes(root->left);
	sum += sumNodes(root->right);

	return sum;
}

int height(node* root){
	//height

	if (root==NULL){
		return -1;
	}

	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height,right_height)+1;
}

bool search_data(node* root, int num){
	//search
	if (root==NULL)
	{
		return false;
	}


	bool left_search = search_data(root->left,num);
	if (left_search){
		return true;
	}
	bool right_search = search_data(root->right,num);
	if (right_search)
	{
		return true;
	}

	if (root->data == num){
		return true;
	}

	return false;
}

void pathPrint(node* root, string ans){

	if (root==NULL){
		return;
	}

	if (root->left==NULL and root->right==NULL){
		char ch1 = root->data + '0';
		cout<<ans<<"-->"<<ch1<<endl;
		return;
	}

	char ch = root->data + '0';

	pathPrint(root->left,ans + "-->" + ch);
	pathPrint(root->right,ans + "-->" + ch);
	return;
}

// int diameter(node* root){} //calculate maximum diameter
//class
// betterheight

bool isbalanced(node* root){

	if (root==NULL){
		return true;
	}

	bool left_balance = isbalanced(root->left);
	if (!left_balance)
	 {
	 	return false;
	 }

	bool right_balance = isbalanced(root->right);
	if (!right_balance)
	{
		return false;
	}

	int left_height = height(root->left);
	int right_height = height(root->right);

	if (abs(left_height-right_height) > 1){
		return false;
	}

	return true;
}

int sumtree(node* root){

	if (root->left==NULL and root->right==NULL){
		return root->data;
	}

	int left_sum = sumtree(root->left);
	int right_sum = sumtree(root->right);

	int cur = root->data;
	root->data = left_sum + right_sum;
	return root->data + cur; 
}

void serialization(node* root){
	if (root==NULL){
		cout<<"-1"<<" ";
		return;
	}

	cout<<root->data<<" ";
	serialization(root->left);
	serialization(root->right);
}

node* common_anssestor(node* root,int data1, int data2){
	if(root==NULL){
		return NULL;
	}

	if(root->data==data1 or root->data==data2){
		return root;
	}

	node* leftLCA = common_anssestor(root->left,data1,data2);
	node* rightLCA = common_anssestor(root->right,data1,data2);

	if(leftLCA==NULL and rightLCA==NULL){
		return NULL;
	}

	if(leftLCA!=NULL and rightLCA!=NULL){
		return root;
	}

	return leftLCA!=NULL ? leftLCA:rightLCA;
}
//wrong code
// int distance_node(node* root,int data1, int data2){

// 		node* lca = common_anssestor(root,data1,data2);

// 		int left=0,right=0;

// 		node* temp=lca;

// 		while(temp->data != data1 and temp->data != data2) {
// 		    left++;
// 		    temp = temp->left;
// 		}

// 		while(lca->data != data2 and lca->data != data1) {
// 		    right++;
// 		    lca = lca->right;
// 		}
// 		return left+right;
// }

// void print_levelWise(node* root){

// 	queue<node*> q;
// 	q.push(root);

// 	int i=1,num=1;

// 	while(!q.empty()) {
	    
// 	    node* temp = q.front();
// 	    q.pop();
	    
// 	    if (i<=num)
// 	    {
// 	    	cout<<temp->data;
// 	    	i++;
// 	    }

// 	    if(temp->left!=NULL){
// 			q.push(temp->left);
// 		}

// 		if(temp->right!=NULL){
// 			q.push(temp->right);
// 		}
		
// 		if (i==num)
// 		{
// 			num <<=1;
// 			cout<<endl;
// 			i=1;
// 		}

// 	}

// 	cout<<endl;
// }

int main(){

	node* root = NULL;

	root = buildTree(root);
	// preorder(root);
	// cout<<endl;
	//inorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;

	// cout<<countNodes(root)<<endl;
	// cout<<sumNodes(root)<<endl;
	// cout<<height(root)<<endl;
	// cout<<search_data(root,9)<<endl;
	// cout<<search_data(root,5)<<endl;
	// pathPrint(root,"");
	// cout<<isbalanced(root)<<endl;
	// sumtree(root);
	// preorder(root);
	// cout<<endl;
	// serialization(root);
	// node* temp = common_anssestor(root,1,3);
	// cout<<temp->data<<endl;
	// cout<<distance_node(root,1,7)<<endl;
	// print_levelWise(root);
	return 0;
}

// 4 2 1 -1 -1 3 -1 -1 6 5 -1 -1 7 -1 -1