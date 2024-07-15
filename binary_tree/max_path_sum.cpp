
Node* max_path(Node* root,int &maxi) {
	if(root == NULL) {
		return 0;
	}

	int leftNode = max(0,max_path(root->left,maxi));
	int rightNode = max(0,max_path(root->right,maxi));

	maxi = max(0,leftNode+rightNode+ root->value);

	return max(leftNode,rightNode) + root-> value;


}

