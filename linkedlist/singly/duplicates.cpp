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

	if(head == NULL) {
		cout << "List is empty" << endl;

	}
	
	  while(head!=NULL) {	
		      cout << head -> data << endl;
		          head = head -> next;
			    }
}



int main() {
	  Node* head = NULL;
	   
	    int n;
	   
	 unordered_set<int> dups;

	      while(true) {
	          cin >> n;
			     

			   
		      if(n<0) {
		        break;
		      }

		      //find the elemnts and remove the duplicates
		      //
		      if(dups.find(n) == dups.end()) {
			      dups.insert(n);
			      head = insert(head,n);
		      }
		     
	 }


	     
	        
	        printLl(head);
		  return 0;
		    
}
    
