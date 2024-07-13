/*
 * in this we are going to use 2 stack method
 *
 * */

//we have 2 stacks 
//
//
//


vector<int> postorder_using_2stacks(Node* root) {
	vector<int> ans;
	if(root == NULL) {
		return ans;
	}

	stack<Node*>st1,st2;


	st1.push(root);

	while(!s1.empty()) {
		Node* node = s1.top();
		s1.pop();
		s2.push(node);

		if(node->left != NULL) {
			s1.push(node->left);
		}
		if(node->right != NULL) {
			s2.push(node->right);
		}
	}

	while(!s2.empty()) {
		ans.push_back(st2.top()->value);
		s2.pop();
		}
	return ans;
}
