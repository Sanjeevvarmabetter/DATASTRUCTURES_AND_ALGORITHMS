//in this problem we need to delete the node
//  	        -  - - x

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    int count = 0;
    if(position == 0) {
        llist = llist -> next;
        return llist;
    }
    SinglyLinkedListNode* ptr = llist;
    SinglyLinkedListNode* prev = NULL;
    while(ptr!=NULL) {
        if(count == position) {
            prev -> next = ptr -> next;
            free(ptr);
        }
        count++;
        prev = ptr;
        ptr = ptr -> next;
    }
    return llist;
}