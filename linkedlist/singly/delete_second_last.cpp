#include<bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node* next;
  
  Node(int data1, Node* value1 = nullptr) {
    data = data1;
    next = value1;
  }
};

Node* insert(Node* head, int value) {
  Node* newnode = new Node(value);
  
  if (head == NULL) {
    return newnode;
  }
  
  Node* ptr = head;
  while (ptr->next != NULL) {
    ptr = ptr->next;
  }
  ptr->next = newnode;

  return head;
}
  
Node* delete_second_largest_node(Node* head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }

  Node* ptr = head;
  int firstMax = INT_MIN;
  int secondMax = INT_MIN;

  // Find the first and second largest values
  while (ptr != NULL) {
    if (ptr->data > firstMax) {
      secondMax = firstMax;
      firstMax = ptr->data;
    } else if (ptr->data > secondMax && ptr->data != firstMax) {
      secondMax = ptr->data;
    }
    ptr = ptr->next;
  }

  // If no second largest element exists
  if (secondMax == INT_MIN) {
    return head;
  }

  // Delete the node with the second largest value
  Node* dummy = new Node(0);
  dummy->next = head;
  Node* prev = dummy;
  ptr = head;

  while (ptr != NULL) {
    if (ptr->data == secondMax) {
      prev->next = ptr->next;
      delete ptr;
      break;
    }
    prev = ptr;
    ptr = ptr->next;
  }

  head = dummy->next;
  delete dummy;
  return head;
}

void printLl(Node* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main() {
  Node* head = NULL;
  
  int n;
  
  while (true) {
    cin >> n;
    if (n == -1) {
      break;
    }
    head = insert(head, n);
  }
  
  head = delete_second_largest_node(head);
  printLl(head);

  return 0;
}
