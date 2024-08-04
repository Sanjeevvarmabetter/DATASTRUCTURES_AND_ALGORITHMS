// given a bst now return the floor  of the given key in the bst
//
//Floor of a value refers to the value of the largest node in the Binary Search Tree that is smaller than or equal to the given key.


// since bst follows left<root<right
//
// it is very easy to find the ceil of x
//
// first we need to find whether the root is greater than the x
//
//
//
// if it is greater than go right 
// else go left
//
//
// use recursion for this
//
// ceil_value = first_num >= x

#include<bits/stdc++.h>

using namespace std;

// structure of node 
struct Node {
	int data;
	Node* left;
	Node* right;


	Node(int data1) {
		data = data1;
	       	left = NULL;
		right = NULL;
	}

};

Node* insert(Node* root,int value) {
	Node* newnode = new Node(value);
	if(root == NULL) {
		return newnode;
	}
	
	if(value<root->data) {
		root-> data = insert(root->left,value);
	}
	else if(value>root->value)  {
		root -> data = insert(root->right,value);
	}
	return root;
}



void print_ceil(Node* root,int x) {

	int ceill = -1;

	while(root) {
		if(root->data == x) {
		ceill = root -> data;
		return ceill;
		}


	if(x> root->data) {
		ceill = root -> right;
	}	

		else {
		ceill = root->data;
		root = root -> left;
		}
	}
	return ceill;
}	
	
		

void print_inorder(Node* root) {
	if(root == NULL) {
		return NULL;
	}

	print_inorder(root->left);
	cout << root -> data <<  " ";
	print_inorder(root->right);

}


int main() {
	Node* root = NULL;

	while(true) {
		int n;
		cin >> n;
		
		insert(root,n);

	}


	cout <<  print_ceil(n) << endl;



	return 0;
}
