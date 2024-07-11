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

	
void reverseQueue() {
		if(isempty()) {
			return;
		}
		int frontElement = peek();
		dequeue();
		reverseQueue();
		enqueue(frontElement);
}


void printQueue() {
	QueueNode* temp = front;
	while(temp != NULL) {
		cout << temp -> val << " ";
		temp = temp -> next;
	}
}



};

int main() {
    Queue q;
    int n;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        q.enqueue(n);
    }

	q.printQueue();

	q.reverseQueue();

	q.printQueue();
   
    

    return 0;
}
