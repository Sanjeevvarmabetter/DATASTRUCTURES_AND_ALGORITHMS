// the bst contain only nodes with keys less than the nodes key
// the right of the binary search tree contains keys greater than roots key
//
// to check whether the node is bst or bt
//
// check the max element in the left subtree is greater than the root node
//	return false 
// if the node of the right child is less the root node then return false
//
//
// else true
//


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


bool check(Node* root,long min_value,long max_value) {
	if(root == NULL) {
		return true ;
	}
	
	if(root->value <= min_value || root -> value >= max_value) {
		return false;
	}

	

	// now we need to check for the left subtree and right subtree
	//
	
	return check(root->left,min_value,root->data) && check(root->right,root->data,max_value);
}



bool isValidBst(Node* root) {
	return check(root,LONG_MIN,LONG_MAX);

}


