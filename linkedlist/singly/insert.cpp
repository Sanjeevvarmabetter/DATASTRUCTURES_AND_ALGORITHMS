#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* next;
	

	//consturctor 
	//
	Node(int data1,Node* next1) {
		data = data1;
		next = next1;
	}

	Node(int data1) {
	data = data1;
	next = NULL;
	}
};

Node* insertStart(Node* head,int value) {
	Node* newnode = new Node(value,head);
	return newnode;

}


void printLinkedList(Node* head) {
	while(head!=NULL) {
		cout << head -> data << " ";
		//this will help to traverse
		head = head -> next;
	}
}

// if i want to inset a new node at the start
//
// definitey the new node  will become the new node;




int  main() {
	// using a vector  i am insertring the data
	//
	
	vector<int>arr = {4,5,6,7};
	Node* head = new Node(arr[0]);
	head -> next = new Node(arr[1]);
	head ->  next -> next = new Node(arr[2]);
	head -> next -> next -> next = new Node(arr[3]);

	int value = 3;
	head = insertStart(head,value);
	printLinkedList(head);

	return 0;
}



/*

let the user give the input 


*/

#include<bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node* next;
  
  Node(int data1,Node* value1) {
    data = data1;
    next = value1;
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
  
  while(ptr ->next != NULL) {
    ptr = ptr -> next;
  }
  ptr -> next = newnode;

	return head;
}
  	
 	 
 	
  


void printLl(Node* head) {
  while(head!=NULL) {
    cout << head -> data << endl;
    head = head -> next;
  }
}



int main() {
  Node* head = NULL;
  
  int n;
  
  while(true) {
    cin >> n;
    
    if(n==-1) {
      break;
    }
    head = insert(head,n);
  }
  
  printLl(head);
  return 0;
  
}
    
  
  
  
 
