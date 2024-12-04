// proving loops in the linked list
//
// traverse the linked list and put a hashmap and keep the track of visited nodes
//

// if we encounted a node again then it is a loop
//

bool detectLoop(Node* head) {
	Node* ptr = head;

	unordered_map<Node*,int> mp;
	
	while(ptr != NULL) {
		if(mp.find(ptr) != mp.end()) {
 			return true;
		}
		
		mp[ptr] = 1;

		ptr = ptr -> next;
	}
	
	return false;
}


/// optimal
//
// using tortise and hare methord
//
// when both ptrs start at the same point the hare reaches faster,but wwhen the hare meets tortise then a loop exits
//


bool DetectLoop_tortise_and_hare(Node* head) {
	Node* fast = head;
	Node* slow = head;	
	
	while(fast != NULL && fast -> next != NULL) {	
		
		slow = slow -> next;
		fast = fast -> next -> next;
		
		if(slow == fast) {	
			return true;
		}
	}
		return false;
} 
