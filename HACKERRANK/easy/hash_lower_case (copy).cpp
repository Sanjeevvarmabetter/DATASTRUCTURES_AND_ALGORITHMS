#include<bits/stdc++.h>
using namespace std;
//code for hashing lower case alphabits
int main() {
	string s;
	cin >> s;
	int n = s.size();
	//precomputation
	int hash[26] = {0};
	for(int i=0;i<=n;i++) {
		hash[s[i]-'a'] ++;
	}
	
	int m;
	cin >> m;
	
	
	while(m--) {
		char c;
		cin >> c;
		//fetch
		cout << hash[c - 'a'] << endl;
		
		}
		return 0;

}
