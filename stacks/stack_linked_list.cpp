#include<bits/stdc++.h>


using namespace std;


// this is rhe structre of the staack node
struct stackNode {
	int data;
	stackNode* next;

	int size;

	stackNode(int data1) {
		data = data1;
		next = NULL;
	}
};


struct stack {
	stackNode* top;
	int size;
	stack() {
		top = null;
		size = 0;


	}

	// operations
	//
	void push_element() {
		stackNode * element = new stackNode(x);
		element -> next = top;
		top = element;
		cout << "pushed" <<endl;
		size++;
	}
	
	void pop_element() {
		if(top == NULL) {
			return -1;
		}

		stackNode* temp = top;
		
		top = top->next;
		delete temp;
		size--;
	}
	
	int stack_size() {
		return size();
	}

	int stack_peek() {
		if(top == NULL) {
			return -1;
		}
		return top -> data;
	}



	//to print the entore stack
	//
	
	void printstack() {
	stackNode* ptr -> top;	
	// we need to traverse the stack
	
	while(ptr != NULL) {
	cout << ptr -> data << " ";
	ptr = ptr -> next;
	}
	}
};

int main() {
	stack s;
	s.push_element(10);
	s.stack_size();
	s.stack_peek();
	return 0;
}
