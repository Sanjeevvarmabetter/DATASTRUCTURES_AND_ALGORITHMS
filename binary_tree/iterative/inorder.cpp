/// we will be using an iterative process


//inorder -> left , root ,right
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



void  inorder_iterative(Node* root,vector<int> &ans) {
		stack<Node*>st;
		Node* node = root;

		while(node!=NULl || !st.empty()) {
			while(node !=NULL) {
				st.push(node);
				node = node -> left;
			}

			node = st.top();
			s.pop();

			ans.push_back(node -> value);

			node =  node -> right;

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

	inorder_iterative(root, ans);
	
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


