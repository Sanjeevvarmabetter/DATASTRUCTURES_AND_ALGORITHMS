/*
 *
 *
 * for the boundary travelsal we need to print the left(without leaves) leaves and right(from a another vector and push it into ans)
 *
 *
 *
 * we need to writen a function to check if it  is a leave node
 *
 * bool isleaf(Node* root) {
 * 	return !root -> left && !root->right
 *
 *
 * */


bool isleaf(Node* root) {
	return !root -> left && !root -> right;

}

void add_leftboundary(Node* root,vector<int>&ans) {
	Node* node = root -> left;

	while(node) {
		if(!isleaf(node)) { 
		       ans.push_back(node -> data);
		}

		if(node->left) {
			node = node->left;
		}
		else {
	  		node = node->right;
		}
	}
}

void add_rightboundary(Node* root,vector<int>> &ans) {
	Node* node = root->right;

	vector<int> res;
	
	while(node) {
		if(!isleaf(node)) {
			res.push_back(node->data;
			}

			if(node->right) {
			node = node -> right;
			}

			else {
			node = node -> left;
			}
			}	
		// revesr the 
		for(int i = res.size()-1;i>=0;--i) {
		res.push_back(res[i]);

	}
	}


	void addLeaves(Node* root,vector<int>&ans) {
	if(isleaf(root)) {
		ans.push_back(root->data);
		return;
	}

	if(root -> left) {
		// use recursion
		addLeaves(root->left,ans);
	}
	if(root -> right) {
		addLeaves(root->right,ans);
	}

	}

	vector<int> printB(Node* root) {
		vector<int>ans;

		if(!root) {
			return res;
		}

		if(!isleaf(root)) {
			ans.push_back(root->data);
		
		}

		add_leftboundary(root,res);
		addLeaves(root,res);
		add_rightboundary(root,res);

		return res;
}

