// i am going to use tortise and hare method
//
// the slow ptr moves one step at a time and the fast ptr moves 2 steps at a time
//


ListNode* middleNode(ListNode* head) {
	ListNode* slow = head;
	ListNode* fast = head;

	while(fast != NULL || fast -> next == NULL) {
	
	slow = slow -> next; //one move 
	fast = fast -> next -> next;
	}
	
	ListNode* ptr = slow;
	while(ptr != NULL) {	
	cout << ptr -> val << endl;
	ptr = ptr -> next;
	}


}
