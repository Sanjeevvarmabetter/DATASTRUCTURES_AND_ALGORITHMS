#include<bits/stdc++.h>

using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int data1) {
         data = data1;
         next = NULL; 
    }
};


Node* insert(Node* head,int x) {
    Node* newnode = new Node(x);


    if(head == NULL) {
        return newnode;
    }


    Node* ptr = head;


    while(ptr->next != NULL) {
        ptr  = ptr -> next; 
    }

    ptr -> next = newnode;

    return head;

}


Node* deleteNode(Node* head,int x) {

    if(head == NULL) {
        return NULL;
    }

    if(head -> data == x) {
        Node* tmp = head;
        head = head -> next;
        delete tmp;
        return head;
    }
    Node* ptr = head;
    
    while(ptr->next != NULL && ptr->next->data != x) {
        ptr = ptr->next;

    }   

            if(ptr->next != NULL) {
                Node* tmp = ptr->next;
                ptr = ptr -> next;
                delete tmp;
            }
        

        return head;

}
void printList(Node* head) {
    if (head == nullptr) {
        cout << endl;
        return;
    }

    while (head != nullptr) {
        if (head->next != nullptr) {
            cout << head->data << " ";
        } else {
            cout << head->data;
        }
        head = head->next;
    }
    cout << endl;
}


int main() {
    int n;

    Node* head = NULL;

    while(true) {
        cin >> n;  

                if(n<0) {
            break;
        }

        insert(head,n);


    }

    int x;
    cin >> x;

    head = deleteNode(head,x);

    printList(head);

    return 0;
}