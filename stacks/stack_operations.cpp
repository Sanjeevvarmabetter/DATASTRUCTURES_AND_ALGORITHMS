/*
 * stack is the last  in first out concept
 * -> push()
 * -> pop()
 *  ->size()
 *  ->isEmpty()
 *  ->peek()/top()
 *
 */


/*
 *
 * two types 
 *
 *
 *  statically -> using arrays
 *
 *  dynamically -> using linked list
 */

// push
//

void stackPush(int x) {
	stackNode* element = new stackNode(x);
	element -> next = top;
	top = element;
	cout << "Elemensts pushes " << endl;
	size++;
}


int stackPOP() {
	if(top == NULL) { // check for underflow
		return -1;
	}

	int topData = top -> data;
	stackNode* temp = top;

	top = top -> next;

	delete temp;
	size--;
	return topData;
}

int stackSize() {
	return size;
}


bool stackempty() {
	return top == NULL;
}



