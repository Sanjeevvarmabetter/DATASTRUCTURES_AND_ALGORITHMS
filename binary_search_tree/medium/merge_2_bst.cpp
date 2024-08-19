/*
 *
 * 
 *   bst-1
 *
 *      3 
 *    |   | 
 *   1     5
 *
 *
 *  bst-2 
 *
 *     4
 *   |   | 
 *   2   6
 *
 *
 *   output = 1 2 3 4 5 6
 *
 *
 * push the left view of both the trees into the stacks
 *
 *
 * if s1.top() > val <= s2.top()-> val then push s1.top() -> val into the result vvector
 *	and push its right to the s1 
 *
 *    else s2.top->val >= s1.top() -> val then push s2.top-> vval into the result vecto
 *     then push it to the 
 *
 *
 *   
 *
 *
 *
 */



int merge_bst(Node* root1,Node* root2) {
	vector<int> ans;

	stack<int> s1,s2;

	while(root1 || root2 || !s1.empty() || !s2.empty()) {
	while(root1) { 
		s1.push(root1);
		root1 = root1 -> left;
	}
	
	while(root2) {
		s2.push(root2);
		root2 = root2->left;
	}



	if(s1.empty() && (!s1.empty() && s1.top -> val <= s2.top() -> val)) {
		root1 = s1.top();
		s1.pop();
		ans.push_back(root1);
		root1 = root1->right;
	}

	else  {
		root2 = s2.top();
		s2.pop();
		ans.push_back(root2);
		root2 = root2 -> right;
	}

	}

	return ans;
}

