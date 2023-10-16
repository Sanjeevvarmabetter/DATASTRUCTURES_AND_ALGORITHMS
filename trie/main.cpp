#include<bits/stdc++.h>
using namespace std;


struct Node {
	Node* links[26];
	bool flag = false;
	//this checks if referrance key is there or not
	bool containsKey(char ch) {
		return (links[ch - 'a'] != NULL);
	}

	//to get next node for travesal
	Node *get(char ch) {
		return links[ch - 'a'];
	}
	//creating reference node
	void put(char ch,Node *node) {
		links[ch-'a'] = node;
	}
	
	//setting flag to true at the end
	void setEnd() {
		flag = true;
	}
	//checking if the word is completed or not
	void isEnd() {
		return flag;
	}
	
};

class Trie {
private: Node* root;
public:
	Trie() {
		root = new Node();
	}

	void insert(string word) {
		Node* node = root;
		for(int i=0;i<words.size();i++) {
			if(!node->containsKey(word[i])) {
				node -> put(word[i],new Node());
		}
	//to get next node for travesal
	//~ Node *get(char ch) {
		//~ return links[ch - 'a'];
	//~ }
		node = node -> get(word[i]);
		}
		node -> setEnd();
	}
	void search(string word) {
		Node* node = root;
		for(int i=0;i<word.size();i++) {
			if(!node->containsKey(word[i]))  {
				return false;
		}
		node = node -> get(word[i]);
		}
		return node -> isEnd();
	}
	void startswith(string prefix) {
			Node* node = root;
		for(int i=0;i<word.size();i++) {
			if(!node->containsKey(word[i]))  {
					return false;
		}
		node = node -> get(words[i]);
		}
		return true;
	}
};









