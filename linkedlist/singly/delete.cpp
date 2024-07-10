#include<bits/stdc++.h>

using namespace std;

struct Node {
       int data;
	Node* next;

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
		return newnode;
	}

	while(ptr -> next != NULL) {
		ptr = ptr -> next;

	}
	ptr -> next = newnode;

	return head;
}


Node* deletel(Node* head) {
	if(head == NULL) {
		return NULL;
	}

	Node* ptr = head;
	head = head -> next;


	delete ptr;

	return head;

}


//Node*  delete(Node*head) {
//	Node* ptr = 

void printll(Node* head) {
	while(head != NULL) {
		cout << head -> data << endl;
	head = head -> next;
	}



}


int main() {

	Node* head = NULL;

	int n;

	while(true) {
		cin >> n;

		if(n<0) {
			break;
		}
		head = insert(head,n);
	}

	head = deletel(head);
	
	printll(head);

	return 0;
}













#include <iostream>
using namespace std;

// Define the Node structure for the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int data1, Node* next1 = NULL) {
        data = data1;
        next = next1;
    }
};

// Function to insert a new node at the end of the linked list
Node* insert(Node* head, int value) {
    Node* newnode = new Node(value, NULL);

    if (head == NULL) {
        return newnode; // If the list is empty, newnode becomes the head
    }

    Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next; // Traverse to the end of the list
    }
    ptr->next = newnode; // Insert newnode at the end of the list

    return head; // Return the head of the list
}

// Function to delete the first node of the linked list
Node* deleteFirst(Node* head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return NULL;
    }

    Node* temp = head; // Store the current head in a temporary pointer
    head = head->next; // Move head to the next node
    delete temp; // Delete the old head node

    return head; // Return the new head of the list
}

// Function to print all elements in the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << endl; // Print the data of the current node
        head = head->next; // Move to the next node
    }
}

int main() {
    Node* head = NULL;
    int n;

    // Input elements into the linked list until a negative value is entered
    while (true) {
        cin >> n;
        if (n < 0) {
            break; // Exit the loop when a negative value is entered
        }
        head = insert(head, n); // Insert each entered value into the linked list
    }

    head = deleteFirst(head); // Delete the first element of the linked list
    printList(head); // Print the linked list after deletion

    return 0; // Exit the program
}
