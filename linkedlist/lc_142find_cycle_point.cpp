// use tortise and hare method and then reset the slow ptr and again  run the while loop 
//
// after that use run both slow and fast at a time and check which comes fist
//


Node* firstNode(Node* head) {
	Node* fast = head;
	Node* slow = head;
	
	while(fast != NULL && fast -> next != NULL) {
	slow = slow -> next;		
	fast = fast -> next -> next;
	
	if(fast == slow) {
		// reset the slow
		slow = head;
		while(slow != fast) {
			slow = slow -> next;
			fast = fast -> next;
		}		
	return slow;

	}
}
}

