#include <bits/stdc++.h>

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

void inorder(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->value);
    inorder(root->right, ans);
}

vector<int> print_inorder(Node* root) {
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

// Function to take level-wise input and construct the binary tree
Node* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;

    Node* root = new Node(nodes[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        Node* current = q.front();
        q.pop();

        if (nodes[i] != -1) {
            current->left = new Node(nodes[i]);
            q.push(current->left);
        }
        i++;
        if (i < nodes.size() && nodes[i] != -1) {
            current->right = new Node(nodes[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

int main() {
    vector<int> nodes;
    int num;

    // Read input until end of line
    string line;
    getline(cin, line);
    istringstream iss(line);

    while (iss >> num) {
        nodes.push_back(num);
    }

    Node* root = buildTree(nodes);
    vector<int> ans = print_inorder(root);
	int count  = 0;
    for (int val : ans) {
        // cout << val << " ";
        count++;
        
    }

    cout << count << endl;
    cout << endl;

    return 0;
}
