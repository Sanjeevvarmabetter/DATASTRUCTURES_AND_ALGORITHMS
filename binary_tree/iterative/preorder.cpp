/// we will be using an iterative process


// preorder -> root , left ,right
//


// since we are using a stack it is last in first out
//
//
// then we pop out from the stack
//
//
//

#include<bits/stdc++.h>

using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;

	Node(int value1) {
		value = value1;
		left = NULL;
		right = NULL;
	}
};



void  preorder_iterative(Node* root,vector<int> &ans) {

	if(root == NULL) {
		return;
	}


	stack<Node*> st;
	st.push(root);
	while(!st.empty()) {
		
		root = st.top();

		st.pop();

		ans.push_back(root->value);

		if(root->right != NULL) {
			st.push(root->right);
		}

		if(root->left != NULL) {
			st.push(root->left);
		}
		
		}

}




Node* buildtree(const vector<int>& nodes) {
	if(nodes.empty() || nodes[0] == -1) {
		return NULL;
	}

	Node* node = new Node(nodes[0]);
	queue<Node*> q;
	q.push(node);
	int  i=1;

	while(!q.empty() && i<nodes.size()) {
		Node* current = q.front();
		q.pop();

		if(nodes[i] !=-1) {
			current -> left = new Node(nodes[i]);
			q.push(current -> left);
		}
		i++;

		if(nodes[i]!=-1 && i<nodes.size()) {
			current -> right = new Node(nodes[i]);
			q.push(current -> right);
		}
		i++;
	}
	return node;
}

vector<int>  printPre(Node* root) {
	vector<int> ans;

	preorder_iterative(root, ans);
	
	return ans;

}


int main() {

	vector<int> nodes;
	int num;

	while(cin >> num) {
		nodes.push_back(num);

		Node* root = buildtree(nodes);
		vector<int> ans = printPre(root);

		for(int i:ans) {
			cout << i << " ";
		}
		
		return 0;
}

}


