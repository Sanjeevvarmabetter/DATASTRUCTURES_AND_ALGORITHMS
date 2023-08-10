//
#include<iostream>
#include<stack>

using namespace std;

//now i am coding stack in a class so that we can use its properties

class Stack {
	//properties

	int *arr;
	int top;
	int size;


	//behaviour

	Stack(int size) {
		this -> size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element) {
			if(size - top > 1) {
				top++;
				arr[top] = element;
			}
			else {
				cout << "Stack overflow" << endl;
			}
	void pop() {
			if(top >=0) {
				top--;
				
		}
		else {
			cout << "stack underflow" << endl;
		}

	int peek() {
		if(top>=0 && top<size) {
			return arr[top];
		}
		else {
			cout << "Stack is empty " << endl;
			return -1;
		}
	}

	bool isEmpty() {
		if(top == -1) {
			return true;
		}
		else {
			return false;
		}
	
};	




int main(){
	//creation of stack
	stack<int> s;

	//push
	s.push(2);

	s.push(4);

	//for popping
	s.pop(); // this will pop the top most element

	cout << "printing the top element " << s.top() << endl;

	if(s.empty()) {

		cout << "stack is empty" << endl;
	}
	else {
		cout << "stack is not empty " << endl;
	}

	
}
