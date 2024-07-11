#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;

	Node(int data1,Node* next1,Node* prev1) {
		data = data1;
		next = next1;
		prev = prev1;
	}

	Node(int data1) {
		data = data1;
		next = NULL;
		prev = NULL;

	}
};


Node* insert_end(Node* head,int value) {
	Node* newnode = new Node(value);
	
	Node* ptr = head;
	while(ptr ->next != NULL) {
		ptr = ptr -> next;
	}
		ptr -> next = newnode;
		newnode -> prev = ptr;
	return head;
}



