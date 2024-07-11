#include<bits/stdc++.h>

using namespace std;



struct Node {
	int data;
	Node* next;

	Node(int data1,Node* next1) {
		data = data1;
		next = next1;
	}

	Node(int data1) {
		data = data1;
		next = NULL;
	}
};

/*


to insert in the end

newnode -> next = null
ptr -> nexr = newnode

 *
 *
 * */


Node* insert_end(Node* head,int value) {
	Node* newnode = new Node(value,NULL);

	
	Node* ptr = head;

	while(ptr -> next!= NULL) {
		ptr = ptr -> next;
	}

	ptr -> next = newnode;
	return head;



};



void printLL(Node* head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}

int maximum(Node* head) {
	int  maxi = INT_MAX;
		
	Node* ptr = head;

	while(ptr->next!=NULL) {
		if(maxi<ptr->data) {
			maxi = ptr -> data;
		}
		ptr = ptr -> next;
	}

	return maxi;
}

int main() {
	vector<int> arr = {2,3,4};
	Node* head = new Node(arr[0]);
	head->next = new Node(arr[1]);
	head -> next -> next = new Node(arr[2]);
	int value = 8;	
	head = insert_end(head,value);
	
	printLL(head);
	cout << maximum(head) <<endl;
	return 0;
}
