#include<bits/stdc++.h>
using namespace std;

struct stackNode {
	int data;
	stackNode* next;

	stackNode(int data1) {
		data = data1;
		next = NULL;
	}
};


struct Stack {
	stackNode* top;
	Stack() {
		top = NULL;
	}

	
	void stack_push(int x) {

	stackNode* element = new stackNode(x);

	element -> next = top;
	top = element;
	}

	void print_stack() {
		stackNode* ptr = top;
		while(ptr  != NULL) {
			cout << ptr -> data << endl;
			ptr = ptr -> next;
		}

	}
};


int main() {
	Stack s;	

	int n;	
	while(true) {
		cin >> n;
	
		if(n<0) {
			break;
		}

			s.stack_push(n);
	}

	s.print_stack();
	return 0;


}

	
	
