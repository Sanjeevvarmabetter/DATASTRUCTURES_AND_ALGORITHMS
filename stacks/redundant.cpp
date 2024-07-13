/*

Stack Usage:
We use a stack to keep track of characters in the expression.

Iterate Through the Expression:
We traverse the input string character by character.

Push Operators and Opening Brackets:
If the character is an opening bracket ( or an operator (+, -, *, /), we push it onto the stack.

Check for Redundant Braces:
If the character is a closing bracket ), we check the top of the stack:

If the top of the stack is an opening bracket (, it means there are redundant brackets.
If the top of the stack is an operator, we pop operators until an opening bracket ( is found.
Flagging Redundancy:
A boolean flag helps in identifying if there are any operators between the brackets. If no operators are found, the brackets are marked as redundant.

*/


#include<bits/stdc++.h>

using namespace std;

// is the stack is ( or any operator we need to push it into the stack
//

bool Redundant(string s) {
	stack<int> st;

	for(auto ch:s) {
		if(ch == ')') {
		char top = st.top();
		st.pop();
		bool flag = true;

		while(!st.empty() && top !='(') {


		if(top=='+' || top == '-' || top=='*' || top=='/') {
			flag = false;
		}
		top = st.top();
		st.pop();

		}

		if(flag) return true;
		
		}

		else {
			st.push(ch);
		}
	}
	return false;
}

int main() {
	string s;
	cin >> s;

	if(Redundant(s)) {
			cout << "Redundant" <<endl;
			}

		else {
		cout << "Not redundant " <<endl;
		}
	return 0;

		}
		






