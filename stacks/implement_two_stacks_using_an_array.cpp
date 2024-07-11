#include<bits/stdc++..h>

using namespace std;


struct stackNode* {
	int data;

	stackNode* next;

	stackode(int data1) {
	
		data = data1;
		next = NULL;	
	}
};


struct Stack {
	Stack* top;
	int size;

	Stack() {
		top = NULL;
		size = 0;
	}


	stackNode* push_element(int x) {
		stackNode* element = new stackNode(x);
		
		element -> next = top;
		top = element;
		cout << "pushed" << endl;
		size++;
	}

	void element_ pop() {
		if(top == NULL) {
			return -1;
		}
		stackNode* temp = top;

		top = top->next;

		delete temp;

		size--;
	}


	void printstack() {
		stackNode* ptr = top;

		while(ptr!=NULL) {
			cout << ptr -> data << " ";
			ptr = ptr -> next;
		}
	}

};

int main() {
	Stack s;
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		int val;
		cin >> val;
		s.push_element(val);
	}
	int m;
	cin >> m;

	for(int  i=0;i<m;i++) {
		int val;
		cin >> val;
		s.push_element(val);
	}
	
	int pop_el1;
	cin >> pop_el1;

	if(pop_eli>s.size) {


		
