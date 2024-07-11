#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node*next;

	Node(int data1,Node* next1) {
		data = data1;
		next = next1;

	}

	Node(int data1) {
		data = data1;
		next = NULL;
	}
};



Node* insert(Node* head,int value) { 
	
	Node* newnode = new Node(value,NULL);

	Node* ptr = head;

	if(head == NULL) {
		newnode -> next = newnode;
		return newnode;
	}
	
	


	while(ptr->next != NULL) {
		ptr = ptr -> next;
	}
	ptr -> next = newnode;

	newnode -> next = head;


	return head;

}





void printl(Node* head) {
	while(head -> next != NULL) {
		cout << head->data << endl;
		head = head -> next;
	}
}


// ptr -> next = head;





int main() {
	
	Node* head = NULL;

	int  n;	
	
	
	while(true) {
		cin >> n;
		if(n<0) {
			break;
		}
		head = insert(n,head);
	}


	printl(head);

	return 0;
}
