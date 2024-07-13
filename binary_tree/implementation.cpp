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

int main() {
	Node* root = new Node(1);
	root -> left = new Node(2);
	root -> left -> right = new Node(3);
}
