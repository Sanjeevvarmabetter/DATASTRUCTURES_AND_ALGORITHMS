// basic structure of the node
//
//
//the linked list contains fdata part and next address
//
//
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
