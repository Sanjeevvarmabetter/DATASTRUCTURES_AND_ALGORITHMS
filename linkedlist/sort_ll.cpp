// brute force sol
//
// create an array and put the node-> val in the arrays
//
// then sort it and remake the linked list
//
//


Node* sort(Node* head) {
	vector<int> arr;

	Node* ptr = head;
	
	while(ptr != NULL) 
	{
	arr.push_back(ptr -> val);
	ptr = ptr -> next;
	}

	sort(arr.begin(),arr.end());

	// now redeploy the elements into the linked list
	// reset the ptr
	ptr = head;
	for(int i=0;i<arr.size();i++) {	
		ptr -> val = arr[i];
		ptr = ptr -> next;
	}
	
	return head;
}
