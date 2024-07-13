#include<bits/stdc++.h>

using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;


	Node(int data1) {
		value = data1;
		left = NULL;
		right = NULL;
	}
};


void inorder(Node* root,vector<int>&ans) 
{
	
	if(root == NULL) {
		return;
	}
	
	inorder(root->left,ans);
	ans.push_back(root->value);
	inorder(root->right,ans);


}


// function to initiate inorder traversal
//
//

vector<int> print_inorder(Node* root) {

	vector<int> ans;

	inorder(root,ans);

	return ans;

}


// Node* insert_into_tree(vector<int>& ans,int i,int n) {
// 	Node* root = NULL;

// 	if(i<n) {
// 		root = new Node(ans[i]);
// 	/// for left child
// 		root -> left = insert_into_tree(ans,2*i+1,n);
// 		root -> right = insert_into_tree(ans,2*i+2,n);

// 	}

// 	return root;

// }


// level wise input

Node* buildtree(const vector<int>&nodes) {
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

		if(i<nodes.size() && nodes[i]!=-1) {
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

	Node* root = buildtree(nodes);
	vector<int> ans = print_inorder(root);

	for(int i:ans) {
		cout << i << " ";
	}

	return 0;
}






// int main() {
// 	Node* root  = new Node(1);
// 	root -> left = new Node(2);

// 	root -> right = new Node(3);

// 	root->left -> right  = new Node(5);

// 	root -> left -> right -> right = new Node(7);


// 	vector<int> ans = print_inorder(root);
		
// 	for(auto i:ans) {
// 		cout << i;
// 	}


// 	return 0;

// }
//
//
//


