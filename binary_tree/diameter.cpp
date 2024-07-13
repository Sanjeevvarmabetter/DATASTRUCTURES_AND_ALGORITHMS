#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val1) {
        value = val1;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1)
        return NULL;

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

int height(Node* node, int& diameter) {
    if (!node) {
        return 0;
    }

    int leftHeight = height(node->left, diameter);
    int rightHeight = height(node->right, diameter);

    diameter = max(diameter, leftHeight + rightHeight+1);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    vector<int> nodes;
    int num;

    string line;
    getline(cin, line);
    istringstream iss(line);

    while (iss >> num) {
        nodes.push_back(num);
    }

    Node* root = buildTree(nodes);
    int diameter = 1;
    height(root, diameter);
    cout << diameter << endl;

    return 0;
}
