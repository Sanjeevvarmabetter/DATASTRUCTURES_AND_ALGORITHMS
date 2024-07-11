
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


int maximum(Node* head) {
	int maxi = 0;

	
	Node* ptr = head;

	while(ptr != NULL) {
	if(maxi < ptr -> data) {
		maxi = ptr -> data;
	}
	ptr = ptr -> next;
	}

	return maxi;
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
  
 	
cout << maximum(head) << endl;

  return 0;
  
}
