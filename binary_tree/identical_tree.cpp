
Node* identical(Node* root1,Node* root2) {
	if(root1 == NULL && root2 == NULL) {
		return NULL;
	}

	if(root1 == NULL || root2 == NULL) {
		return false;
	}

	return (root1->value == root2->value) && identical(root1 -> left,root2->right) && identical(root1-> right,root2 -> left);
}


