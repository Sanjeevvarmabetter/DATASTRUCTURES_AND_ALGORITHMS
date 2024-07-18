#include<bits/stdc++.h>


using namespace std;

int find_char(string s,string target) {
	

	for(size_t i=0;i<s.length();i++) {
		if(s[i] == target) {
			return i;
		}
	}
	return -1;
}




int main() {
	string s;
	cin >> s;
	string target;
	cin >> target;

	cout << find_char(s,target) << endl;
	return 0;
}
