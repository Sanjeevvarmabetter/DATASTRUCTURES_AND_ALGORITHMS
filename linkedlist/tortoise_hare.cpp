How It Works
Pointers Movement:

The tortoise moves one step at a time.
The hare moves two steps at a time.
Cycle Detection:

If there is no cycle, the hare will reach the end of the list (null pointer) before the tortoise.
If there is a cycle, the hare and the tortoise will eventually meet inside the cycle.
Cycle Start Point (Optional):

Once a cycle is detected, reset the tortoise to the head of the list and move both pointers one step at a time. The point where they meet again is the start of the cycle




bool HasCycle(ListNode* head) {
	if(head == NULL || head -> next == NULL) {	
		return false;
	}
		

	ListNode* slow = head; // moves one step
	ListNode* fast = head; // moves two steps
	
	while(fast !=NULL && fast -> next != NULL) {
	slow = slow -> next;
	fast = fast -> next -> next;
	 
	
	if(slow == fast) {
		return true; /// that means tortise and hare meets
	}


	}
	return false;
}

