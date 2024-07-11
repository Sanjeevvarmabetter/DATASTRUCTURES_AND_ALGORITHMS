#include<bits/stdc++.h>

using namespace std;

struct QueueNode {
	int val;
	QueueNode* next;
	QueueNode(int data) {
		val = data;
		next = NULL;
	}
};


struct Queue {
	QueueNode *front,*rear;

	int size;

	Queue() {
		front = NULL;
		rear = NULL;
		size = 0;

	}

	bool isempty() {
		return front == NULL;

	}
	void enqueue(int value) {
		QueueNode *ptr = new QueueNode(value);

		if(ptr == NULL) {
			cout << "Queue is empty " << endl;
		}
		else {
			if(front == NULL) {
				front = ptr;
				rear = ptr;
			}
			else {
				rear -> next = ptr;
				rear = ptr;
			}

			cout << value << "inserted into the queue" << endl;

			size++;
		}
	}

	void dequeue() {
	if(front == NULL) {
	cout << "Queue is empty " << endl;	
	}

	QueueNode* temp = front;
	front = front -> next;
	delete temp;
	size--;
	}

    int peek() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return front->val;
        }
    }


};


int main() {
    Queue q;
    q.enqueue(23);
    q.enqueue(45);
	// q.dequeue();
    // cout << "popped" <<endl;
	// q.dequeue();z
    // cout << "popped" << endl;
	// q.dequeue(); // This should show that the queue is empty

    cout << "Size of the queue: " << q.size << endl;
    cout << "Front element of the queue: " << q.peek() << endl;

    return 0;
}
