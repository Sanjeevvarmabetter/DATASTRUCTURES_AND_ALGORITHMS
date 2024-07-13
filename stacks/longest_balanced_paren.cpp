#include<bits/stdc++.h>

using namespace std;

int find_length_long_balanced_parenthesis(string s) {
	int left = 0;
	int right = 0;
	int maxi = 0;

	for(int i=0;i<s.length();i++) {
		if(s[i] == '(') {
			left++;
		}
		else {
			right++;
		}

		if(left == right) {
			maxi = max(maxi,left*2);
		}
		else if(right > left) {
			// reset
			left = 0;
			right = 0;
		}
	}

	left = 0;
	right = 0;

	for(int i=s.length()-1;i>=0;i--) {
		if(s[i] == '(') {
			left++;
		}

		else {
			right++;
		}
		if(left == right) {
			maxi = max(maxi,left*2);
		}
		else if(left>right) {
			left = 0;
			right = 0;
		}
	}
	
	return maxi;
}

int main() {
	string s;
	cin >> s;

	cout << find_length_long_balanced_parenthesis(s) << endl;
	return 0;
}
