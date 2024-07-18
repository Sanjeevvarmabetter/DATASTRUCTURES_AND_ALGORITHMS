// push this in the stack and  
//
//


#include<bits/stdc++.h>

using namespace std;


int main() {
	string s;
	cin >> s;

	int open = 0;
	int close = 0;

	for(int i=0;i<s.length();i++) {
		if(s[i] == ')') {
			open++;

		}
		else {
			close++;
		}
	}

	int diff = abs(open - close);

	cout << diff << endl;

	return 0;
}
