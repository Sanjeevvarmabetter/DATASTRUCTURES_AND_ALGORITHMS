#include<bits/stdc++.h>

using namespace std;

//structure for a node in deque
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
} Node;

//structure for deque


struct {
	Node* front;
	Node* rear;
}Deque;


//function to create a new node


Node* create_new_node(int data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode -> data = data;
	newnode -> next = NULL;
	newnode -> prev = NULL;
	return newnode;
}


//function to init a deque
//we need to inherit the deque struct properties
//
void initDeque(Deque* deque) {
	deque -> front = NULL;
	deque -> rear = NULL;
}

//function to add element to the front 

void add_element_to_front(Deque* deque,int data) {
	Node* newnode = create_new_node(data);
	if (deque -> front == NULL) {
		deque -> front = deque -> rear = newnode;
	}
	else {
		newnode -> next = deque -> front;
		deque -> front -> prev = newnode; //prev ptr of the current front node is set to newnode
		deque -> front = newnode; //finally the new front ptr is set to newnode
	}

}


//function to add the element to the rear
void add_element_to_rear(Deque* deque,int data) {
	Node* node = create_new_node(data);

	if(deque -> rear == NULL) {
		deque -> front = deque -> rear = newnode;
	}
	else {
		newnode -> prev = deque -> rear;
		deque -> rear -> next = newnode;
		deque -> rear = newnode; //the new rear ptr is set to newnode
	}


}


//function to remove element from the front
void remove_element_from_front(Deque* deque) {
	
}

//function to remove the element from the rear
void remove_element_from_rear(Deque* deque) {

}

//function to display the elements of the deque
//


void display_the_elements(Deque* deque) {
	Node* current = deque -> front;
	while(current != NULL) 
	{
		cout << current -> data;
		current = current -> next
	}
}