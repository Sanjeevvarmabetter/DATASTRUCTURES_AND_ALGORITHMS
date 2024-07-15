// what is right view?
// this is a set of nodes where the tree is visited from the right side;
//
//
//
//
// look from the right direction 
//
//    1
//
//  2  3 right view is 1 3 7 -> why not 4 and 5 because these elements  are coveig them
//
//4  5   7
//
//


//  <------------
//  <-------------
//
//
//
//  the first node is always my right/left node
//
//
//
//  there are 2 levels recussive | iterative (level order)
//
//	 
//
//       


/// in this we will be using revese preorder traversal
//  l ri root -> root right left
//
//
/*
 i will have a data struct and 

 if(level == s.size)  eveytime we get a new level
	ds.add(node)

*/

// new size  = new node first node from the right size
//


// f(node->left,level+1)
// f(node->right,level+1

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




void f(Node*root,int level,vector<int> &ans) {
	if(root == NULL) {
		return;
	}
	if(ans.size() == level) {
		ans.push_back(root->data);
	}
	// for right 
	f(root->right,level+1,ans);
	f(root->left,level+1,ans);

	}

vector<int> rightSize(Node* root) {
	vector<int> ans;
	int level = 0;

	f(root,level,ans);
	return ans;
}




int main() {
	
	vector<int> nodes;
	int n;

	while(cin >> n) {
		nodes.push_back(n);
	}

	Node* root = buildtree(nodes);

	vector<int> ans = rightSize(root);

	for(int i:ans) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
	
}

