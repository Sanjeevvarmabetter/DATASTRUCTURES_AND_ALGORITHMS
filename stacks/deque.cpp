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
	
}


//function to add the element to the rear
void add_element_to_rear(Deque* deque,int data) {

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

}