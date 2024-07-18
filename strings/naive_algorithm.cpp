#include<bits/stdc++.h>

using namespace std;


void naive_pattern_checker(string &text,string &pattern) {

	int n = text.length();
	int m = pattern.length();
	for(int i=0;i<=n-m;i++) {
		int j=0;
		for(j=0;j<m;j++) {
			if(text[i+j]!=pattern[j]) {
				break;
			}
		}

		if(j==m) {
			cout << i << endl;
		}

	}
}



int main() {
	string text;
	string pattern;

	getline(cin,text);
	getline(cin,pattern);



	naive_pattern_checker(text,pattern);

	return 0;
}
