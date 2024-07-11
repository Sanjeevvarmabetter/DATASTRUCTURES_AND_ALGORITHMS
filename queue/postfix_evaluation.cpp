#include<bits/stdc++.h>

using namespace std;


int evaluate(string ss) {
	stack<int> st;

	for(int i=0;i<ss.size();i++) {

		if(isdigit(ss[i])) {
		       st.push(ss[i] - '0');
		}
 	else {
	int val1 = st.top();	
	st.pop();
	int val2 = st.top();
	st.pop();
	
	switch(ss[i]) {
	case '+':
		st.push(val1 + val2);
		break;
	case '-':
		st.push(val2 - val1);
		break;
	case '*':
		st.push(val2 * val1);
		break;
	case '/':
		st.push(val2 / val1);
		break;
	}
	}
	}
return st.top();
}

int main() {
	int n;
	cin >> n;

	for(int i=0;i<n;i++) {
		string ss;
		cout << evaluate(ss);
	}
	return 0;
}
