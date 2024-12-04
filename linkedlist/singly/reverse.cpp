// reversing a linked list
//

// brute force : we will be using stack and then store the values in it, once all the nodes are stored in the stack we rebuild the reversed linked list
// 		finally we will have a linked list that is reversed
//
//



struct Node {
	int data;
	Node* next;
	
	Node(int x) {	
	data = x;
	next = NULL;
}
};


Node* ReverseLinkedList(Node* head) {
	Node& ptr = head;
	stack<int> st;
	
	while(ptr!= NULL) {
	// push the data in to the stack
	
	st.push(ptr->data);
	
	// move to the next
	
	ptr = ptr -> next;
	}

	// reset the ptr
	ptr = head;
	

	while(ptr != NULL) {
	ptr -> data = st.top(); // this gets the top element
	st.pop();
	ptr = ptr -> next;
	}

	return head;
}


// iterative approach
//
//
