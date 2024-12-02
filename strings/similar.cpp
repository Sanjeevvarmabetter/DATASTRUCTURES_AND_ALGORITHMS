#include<bits/stdc++.h>

using namespace std;



// brute force solution
//
// iterate through all the suffixes at thhe position i to a
// and calculate the similarity
//
// for each suffix count how many chars match with the begineign of s
//
// after computing for each one sumup the similarities
//


int cal(const string & s) {	
	int n = s.size();
	int total = 0;

	for(int i=0;i<n;i++) {
		int sim = 0;
		
	for(int j=0;j<n-1;j++) {		
		if(s[j] == s[i+j]) {
		sim++;
		}
	total+= sim;
	}
}
	return total;
}

int main() {
	int t;	
	cin >> t;
	while(t--) {	
		string s;
		cin >> s;
		cout << cal(s) << endl;
	}
	return 0;
}
