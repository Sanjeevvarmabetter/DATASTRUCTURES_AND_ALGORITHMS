#include<bits/stdc++.h>

struct ListNode {_
	int val;
	ListNode* next;
	ListNode(int x) {	
		val = x;	
		next = NULL;
}	

class Solution {
public:
	void Delete(ListNode* node) {
	
	if(node == NULL || node -> next == NULL {	
		return;
	}
		
	node -> val = node -> next-> val;
	node -> next = node -> next -> next;
}
