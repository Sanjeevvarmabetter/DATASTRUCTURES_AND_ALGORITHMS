#include<bits/stdc++.h>

using namespace std;



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



Node* insert_in_bst(Node* root,int value) {
	
	Node* newNode = new Node(value);
	
	if(root == NULL) {
		return newNode;
	}

	while(root != NULL) {
		if(val > root) {
			return insert_in_bst(root->right,value);
		}

		else {
			return insert_in_bst(root->left,value);

		}
	 
	}

	return root;
}




void find_min_max(Node* root) {
	
	// first init a min and max;
	// then do a linear scan of the bst
	// now check the min and max
	

	int min = INT_MAX;
	int max = INT_MIN;


	while(root!=NULL) {
		if(root->val > max) {
			max = root->val;
		}
}




int main() {

}
