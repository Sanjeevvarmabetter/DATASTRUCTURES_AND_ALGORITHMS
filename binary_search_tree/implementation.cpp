/*
 *
 * binary search tree
 *
 * the left node value should be less than root and right node is greater than root node
 *
 *
 *
 * l<N<r
 *
 * and each subtree should be a bst
 *
 * duplicate?
 *
 * ideally duplicates are not allowed, but what if i want to add duplicates
 *
 */

  

Node* searchbst(Node*root,int value) {
	while(root!=NULL && root -> val != value) {
		//search for the nodes
		// if value is less than root value
		//
		if(value<root->val) {
			root = searchbst(root->left,value);

		}
		else {
			root = searchbst(root->right,value);
		}

		return root;
	}
}
