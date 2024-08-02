#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the linked list
Node* insert(Node* head, int data) {
    Node* newnode = new Node(data);
    if (head == nullptr) {
        return newnode;
    }
    Node* ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    return head;
}

// Function to partition the linked list
Node* partition(Node* head, int x) {
    Node less(0), greater(0);
    Node* lessPtr = &less;
    Node* greaterPtr = &greater;

    while (head != nullptr) {
        if (head->data < x) {
            lessPtr->next = head;
            lessPtr = lessPtr->next;
        } else {
            greaterPtr->next = head;
            greaterPtr = greaterPtr->next;
        }
        head = head->next;
    }

    // End the greater list
    greaterPtr->next = nullptr;
    // Connect the less list with the greater list
    lessPtr->next = greater.next;

    return less.next;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        if (head->next) {
            cout << head->data << " ";
        } else {
            cout << head->data;
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n;

    // Read and construct the linked list
    while (cin >> n && n >= 0) {
        head = insert(head, n);
    }

    int x;
    cin >> x;

    // Partition the list
    Node* partitionedHead = partition(head,x);

    // Print the partitioned list
    printList(partitionedHead);

    return 0;
}
