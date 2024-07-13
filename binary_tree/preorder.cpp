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

void preorder(Node* root,vector<int> &ans) {
	if(root == NULL) {
		return;

	}
	
	ans.push_back(root -> data);
	preorder(root -> left,ans);
	preorder(root -> right,ans);

}

vector<int> print_inorder(Node* root) { 
	vector<int> ans;
	preorder(root,ans);

	return ans;

}


// building the tree level wise	

Node* buildtree(const vector<int>&nodes) {

	if(nodes.empty() || nodes[0] == -1) {
		return NULL;
	}

	Node* root = new Node(nodes[0]);

	queue<Node*> q;
	//first push the root node
	q.push(root);

	int i=1;

	while(!q.empty() && i< nodes.size()) {
		Node* current = q.front();
		q.pop();

			if(nodes[i] != -1) {
				current -> left = new Node(nodes[i]);
				q.push(current -> left);
			}
		i++;

		if(i<nodes.size() && nodes[i] != -1) {
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

	string line;
	getline(cin,line);
	istringstream iss(line);

	while(iss>>num) {
		nodes.push_back(num);
	}
	Node* root = buildtree(nodes);
	vector<int> ans = print_inorder(root);


	for(int val:ans) {
		cout << val << " ";
	}
	cout << endl;

	return 0;

}
