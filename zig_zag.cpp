// zig zag : start from left the next line will be right
//
// this is a modification of level order traversal
//
//

#include<bits/stdc++.h>

using namespace std;


vector<vector<int>>  zig_zag_traversal(Node* root) {
	vector<vector<int>> ans;

	if(root == NULL) {
		return ans;
	}

	queue<Node*> q;
	q.push(root);

	bool leftToright = true;

	while(!q.empty()) {
		int size = q.size();

		vector<int> level;

		for(int i=0;i<size;i++) {
			Node* node = q.front();

			q.pop();


			// now check hoe the boolean 
			// if true (lefttoright) -> index = i , else index = (size-1-i)

			if(lefttoright) {
				int index = i;
			}
			else {
				index = size - 1 - i;
				
			}
		
		level[index] = node -> data;

		if(node->left != NULL) {
			q.push(node->left);
		}
		if(node -> right != NULL) {
			q,push(node->right);
		}

	}
		ans.push_back(level);
		leftToright = !leftToright;
	}

	return ans;
}

