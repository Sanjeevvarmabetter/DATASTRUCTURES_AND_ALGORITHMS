#include<bits/stdc++.h>

using namespace std;



bool balance(string s) {

	stack<char> st;

	for(auto ch:s) {
		if(ch=='(' || ch == '{' || ch == '[') {

		st.push(ch);
		}
		else if(ch == ')' || ch == '}' || ch == ']') {
				if(st.empty()) {
					return false;
				}
			char top = st.top();
			st.pop();

			if((ch==')' && top != '(') || (ch=='}' && top!='{') || ch==']' && top != '[') {
				return false;

		}
	}
	}	

	return st.empty();

}


int main() {
	string s;
	cin >> s;
	
	if(balance(s)) {
		cout << "Balanced" << endl;

	}
	else {
		cout << "Not Balanced" << endl;
	}	
	return 0;
}
