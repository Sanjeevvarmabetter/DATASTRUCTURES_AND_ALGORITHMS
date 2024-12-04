// use stack for this
//
//
//

bool ispalindrome(Node* head) {
	stack<int> st;
	
	Node* ptr = head;
		
	while(ptr != NULL) {
		st.push(ptr);
		ptr = ptr -> next;
	
	}
	
	// now reset the ptr 
	
	ptr = head;
	
	while(ptr != NULL) {
		if(st.find(ptr) != st.top()) {
			return false;
		}
	
	st.pop();
	ptr = ptr -> next;
	}
	return true;
}


// optimal solution 
// reverse the string upto half then compare 
