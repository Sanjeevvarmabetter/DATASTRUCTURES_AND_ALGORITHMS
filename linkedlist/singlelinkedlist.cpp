// //the basic representation of linked list in c++
// //we are using struct

// struct linkedlist {
//     int data;
//     linkedlist * nxt;
// };

//the below code is for traversing 
#include<bits/stdc++.h>
using namespace std;

//this is the representation of the linked list 
struct node {
    int data;
    node * next;
};

//this code is for traversing the linked list
void printl(struct node* n) {
    while(n!=NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    //now we need to insert elements to the nodes

    head -> data = 4;
    head -> next = second;

    second -> data = 3;
    second -> next = third;

    third -> data = 34;
    third -> next = fourth;

    fourth -> data = 8765;
    fourth -> next = NULL;

    printl(head);
    return 0;
}
