#include<bits/stdc++.h>

using namespace std;



string reverse(string s) {
	stack<int>st;

	for(auto i:s) {
		st.push(i);
	}

	string ans = "";

	while(!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}


int main() {
	string s;

	cin >> s;
	
	cout << reverse(s) << endl;
	return 0;
}	
