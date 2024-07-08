
#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* next; //using a ptr we can dynamicly change the size
		    // this next holds the address of the next node

	// this is the initial values for the node
	//constructor inital valies
	Node(int value): data(value), next(nullptr) {} 
};

/*
 * there are insert at begin, end, before ,after ,specific
 *
 * */


void insert_head(Node*&head,int value) {
	Node* newnode = new Node(value);
	

	newnode -> next = head;
	head = newnode;

}

void insert_end(Node*& head,int value) {
	Node* newnode = new Node(value);

	newnode -> next = NULL;
	Node* temp = head;
	while(temp->next!=NULL) {
		//traverse
		temp = temp -> next;
	}

	temp -> next = newnode;

}


void insert_after(Node*&head,int target,int value) {
	Node* newnode = new Node(value);

	Node* temp = head;

	while(temp -> data != target) {
		temp = temp -> next;
	}
	
	newnode -> next = temp -> next;
	temp -> next = newnode;

}

void insert_before(Node*&head,int target,int value) {
	Node* newnode = new Node(value);
	Node* temp = head;

	while(temp -> data != target) {
		temp = temp -> next;

	}


	newnode -> next = temp -> next;
	temp -> next = newnode;
}


int main() {

	Node* first = new Node(1);
	Node* second = new Node(2);
	Node* third = new Node(3);


	// linking the nodes
	//
	first -> next = second;
	second -> next = third;


	// traversing the linked list and printing the values
	//
	Node* current = first;

	while(current!=NULL) {
		cout << current -> data << " ";
	       current = current -> next;
	}

	return 0;
}
