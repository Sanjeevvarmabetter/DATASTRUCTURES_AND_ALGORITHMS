#include<bits/stdc++.h>

using namespace std;

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


vector<vector<int>> level_traversal(Node* root,vector<vector<int>> &ans) {


	if(root==NULL) {
		return ans;
	}

	queue<Node*> q;
	q.push(root);

	while(!q.empty()) {

	int size = q.size();

	vector<int> level;

	for(int i=0;i<size;i++) {
		Node* node = q.front();

		q.pop();

		level.push_back(node->data);
		
		if(node->left !=NULL) {
			q.push(node->left);
		}
		if(node->right != NULL) {
			q.push(node->right);
		}
	}
	ans.push_back(level);

	}
	return ans;
}
		

vector<vector<int>> print_level(Node* root) {
	vector<vector<int>> ans;

	level_traversal(root,ans);

	return ans;
}



			
Node* buildTree(const vector<int>&nodes) {
	if(nodes.empty() || nodes[0] == -1) {
		return NULL;
	}

	Node* root = new Node(nodes[0]);

	queue<Node*> q;
	q.push(root);
	int i=1;

	while(!q.empty() && i<nodes.size()) {
		Node* current = q.front();

		q.pop();

		if(nodes[i] != -1) {
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
	return root;

}



int main() {
	vector<int> nodes;
	int num;

	while(cin >> num) {
		nodes.push_back(num);
	}
	Node* root = buildTree(nodes);
	vector<vector<int>> ans = print_level(root);
		
	for(const vector<int>& i:ans) {
		cout << i << endl;
	}

	return 0;
}
