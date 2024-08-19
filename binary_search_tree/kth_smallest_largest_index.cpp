 // Given a Binary Search Tree and an integer ‘K’. Find and return the ‘K-th’ smallest and ‘K-th’ largest element in the given Binary Search Tree.'
 //
 //


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


Node* insert(Node* root,int x) {
}






void inorder(Node* root) {
	
	if(root == NULL) {
		return;
	}

	inorder(root->left);
	
	cout << root->data << " ";

	inorder(root->right);

}

void print_kth_min_max(Node* root,int k) {

	vector<int>ans;

	inorder(root,ans);

	int kth_min = ans[k-1];

	int kth_max = ans[ans.size()-k];


	return make_pair(kth_min,kth_max);


}
