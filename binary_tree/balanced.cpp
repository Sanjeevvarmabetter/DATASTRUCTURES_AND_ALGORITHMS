//  height(left) - height(right) <= 1


Node* balanced(Node* root) {
	if(root == NULL) {
		return NULL;
	}

	int leftHeight = balanced(root->left);
	if(leftHeight == -1) {
		return -1;
	}
	int rightHeight = balanced(root->right);
	if(rightHeight == -1) {
		return -1;
	}

	if(abs(leftHeight - rightHeight) >1) {
		return -1;
	}

	return 1+max(leftHeight,rightHeight);
}


