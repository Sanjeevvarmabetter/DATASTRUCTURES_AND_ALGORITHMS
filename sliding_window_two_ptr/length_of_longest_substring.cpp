//Problem Statement: Given a String, find the length of longest substring without any repeating character.



/// first we need to iterate over the string and push it into the hashset
//
//now check the new elements for the next string and check with the hashset
//
//

#include<bits/stdc++.h>


using namespace std;

int f(string s) {
	if(s.size() == 0) {
		return 0;
	}

	int max_ans = INT_MIN;


	for(int i=0;i<s.length();i++) {

		unordered_set<int> hashset;

		for(int j=i;j<s.length();j++) {
			if(hashset.find(s[j]) != hashset.end()) {
			       max_ans = max(max_ans,j-i);
			}

			hashset.insert(s[j]);

		}
	}

	return max_ans;
}


int main() {

	string s;
	cin >> s;
	cout << f(s) << endl;

	return 0;
}
	
